/*	CP06_10.C	*/
/*	Example for loop	*/
#include<stdio.h>
#include<conio.h>

void main()
{
int i, N;
printf("\nEnter a positive integer : ");
scanf("%d", &N);

printf("Here is the given series:\n");

for (i=1; i<=N; i=i+1)
 {
  printf("%d  ", i);
 }   // End of for loop
getch();
} // End of main()
