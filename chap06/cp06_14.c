/*	CP06_14.C	*/
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
printf("\n----------------------------");
printf("\n1 + 2 + 3+  ... + %d = ", N);
for (i=1; i<=N; i=i+1)
   {
    Sum = Sum +i;
   }   // End of for
printf("%ld", Sum);
getch();
}
