/*	CP17_04.CPP	*/
/*	Example for loop	 */
#include<stdio.h>
#include<conio.h>
void main()
{
int N;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("Here is the given series:\n");
for (int i=1; i<=N; i++)  // Instant variable declaration
 {
  printf("%d  ", i);
 }  
getch();
} 
