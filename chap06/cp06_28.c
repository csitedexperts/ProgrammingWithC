/*	CP06_28.C	*/
/*	Calculating G.C.F. of two numbers */
#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2, temp;
printf("\nEnter two nonnegative integers: ");
scanf("%d  %d", &n1, &n2);
printf("\nGreatest Common Factor of %d and %d is: ", n1, n2);
while(n2 !=0)
  {
    temp = n1 %n2;
    n1 = n2;
    n2 = temp;
   }  // End of while

printf("%d", n1);
getch();
}   // End of main
