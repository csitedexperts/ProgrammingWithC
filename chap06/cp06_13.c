/*	CP06_13.C	*/
/*	Example for loop	*/
#include<stdio.h>
#include<conio.h>
void main()
{

int i, N;
long int Sum=0;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("\n2 + 4 +  ... + %d = ", N);
for (i=2; i<=N; i=i+2)
   {
    Sum = Sum +i;
   }   // End of for
printf("%ld", Sum);
getch();
}
