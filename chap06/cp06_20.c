/*	CP06_20.C	*/
/*	Example of for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int f0=0, f1=1, f;
int i, N;
printf("\nHow many Fibonacci numbers ? ");
scanf("%d", &N);
printf("First %d Fibonacci Numbers are:\n", N);
for ( i=1 ;   ; i++)
   {
   f=f0+f1;
   printf("%5d", f);
   f1=f0;  
   f0=f;
   if(i>=N)
    exit(0); // exit from Loop
 }  
 getch();
}   // End of main()
