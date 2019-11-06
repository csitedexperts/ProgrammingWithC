/*	 CP10_28.C	*/
/* strchr() Function example */
#include <string.h>
#include <stdio.h>

int main()
{
 char string[25], *ptr;
 char c = 'n';
 strcpy(string, "Programming in C");
 ptr = strchr(string, c);    // Using strchr()
 
 if (ptr)
   {
   printf("In the string '%s' ", string);
   printf("\nFirst %c is at : string[%d]\n", c, ptr-string);
   ptr = strrchr(string, c);   // Using strrchr()
   printf("\nLast %c is at : string[%d]\n", c, ptr-string);
   }
  else
    printf("\nThe character was not found\n");

 getch();
 return 0;
}
