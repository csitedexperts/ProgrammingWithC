/*	CP06_21.C	*/
/*	Example of nested for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i, j, N;  
printf("\nEnter the highest range : ");
scanf("%d", &N);

printf("Series of prime number upto %d is:\n", N);
for ( i=2; i<=N; i++)  
   {
   for (j=2; j<=i; j++)
     {
      if(i%j==0)
      break;
     }  // End of inner for
     if(i==j)
     printf("%d  ", i);
   }   // End of outer for
 getch();
}   // End of main()
