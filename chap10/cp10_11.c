/* CP10_11.C  	*/
/* Example using sscanf() and sprintf() functions */ 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define NUMITEMS 4

char *names[4] = {"Peter", "Mike", "Shea", "Jerry"};

int main()
{
   int   loop;
   char  temp[4][80];
   char  name[20];
   int   age;
   long  salary;

/* clear the screen */
   clrscr();

/* create name, age and salary data */
   for (loop=0; loop < NUMITEMS; ++loop)
    sprintf(temp[loop],"%s %d %ld", names[loop], random(10) + 20, random(5000) + 27500L);

/* print title bar */
   printf("%4s | %-20s | %5s | %15s\n", "#", "Name", "Age", "Salary");
   printf("   --------------------------------------------------\n");

/* input a name, age and salary data */
   for (loop=0; loop < NUMITEMS; ++loop)
      {
      sscanf(temp[loop],"%s %d %ld", &name, &age, &salary);
      printf("%4d | %-20s | %5d | %15ld\n", loop+1, name, age, salary);
      }

   return 0;
}
