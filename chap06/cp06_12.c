/*	CP06_12.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{

int i, N;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
for (i=2; i<=N; i=i+2)
 {
  printf("%d  ", i);
 }   // End of for loop
getch();
} // End of main()
