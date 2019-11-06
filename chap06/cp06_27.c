/*	CP06_27.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>

void main()
{
int i, N;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("Here is the given series:\n");
i=2;

while(i<=N)
 {
  printf("%d  ", i);
 i=i+2;
 }   // End of while loop
getch();
} // End of main()
