/*	CP06_19.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i , N;
long Sum=0;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("\nSUM OF SERIES");
printf("\n----------------------------");
printf("\n1 + 2 + 3+  ... + %d = ", N);
i=1; 	// Counter Initialization
for (  ; i<=N;  ) // Condition
   {
    Sum = Sum +i;
    i=i+1; 		// Counter Increment
   }   // End of for
printf("%ld", Sum);
getch();
}
