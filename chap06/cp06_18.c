/*	CP06_18.C	*/
/*	Example of for loop*/
#include<stdio.h>
#include<conio.h>

void main()
{
int f0=0, f1=1, f;
int i;
printf("First 10 Fibonacci Numbers are:\n");

for ( i=1; i<=10; i++)
   {
   f=f0+f1;
   printf("%5d", f);
   f1=f0;  
   f0=f;
 }  
 getch();
}   
