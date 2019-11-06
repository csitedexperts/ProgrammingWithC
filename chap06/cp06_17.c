/*	CP06_17.C  */
/* Program to display the series 1 3 6 10 15 21 28 */
#include<stdio.h>
#include<conio.h>
void main()
{
int i; N;
long S=0;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("Here is the given series: ");
for (i=1; i<=N; i++)
   {
    S = S +i;
    printf("%ld  ", S);
   } 
printf("...");
getch();
}
