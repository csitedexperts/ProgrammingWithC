/*	CP06_15.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i, N;
long Sum=0;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("\nSUM OF SERIES");
printf("\n--------------------");
printf("\n1 + 3 + 5 + ... + %d = ", (2*N+1));
for (i=1; i<=(2*N+1); i=i+2)
   {
    Sum = Sum +i;
   }  
 printf("%ld", Sum);
getch();
}
