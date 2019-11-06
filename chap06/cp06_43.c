/*	CP06_43.C	*/
/*	Example of goto & do--while loop Statements*/
#include<stdio.h>
#include<conio.h>
void main()
{
int x;
for (; ;)  // infunite for loop 
   {
    XX:
    printf("\nEnter a positive integer: ");
    scanf("%d", &x);

      if(x<=0)
       goto XX;
      else
       break;
    }   // End of for
 printf("\n You have entered %d", x);
 getch();
}   // End of main
