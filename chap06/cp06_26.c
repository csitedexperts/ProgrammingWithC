/*	CP06_26.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i, N;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("Here is the given series:\n");
i=1;

while(i<=N)
 {
  printf("%d  ", i);
  i=i+1;
 }   // End of while loop
getch();
} // End of main()
