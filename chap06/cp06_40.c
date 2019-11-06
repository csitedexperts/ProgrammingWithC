/*	CP06_40.C	*/
/*	Example of do--while loop Statement */
#include<stdio.h>
#include<conio.h>

void main()
{
int number, rightdigit, sum=0;
int actnum;

printf("\nEnter your number: ");
scanf("%d", &number);
actnum = number; 

do
{
    rightdigit = number %10;  // printf("%d", rightdigit);
    number = number/ 10;
   sum = sum + rightdigit ;
   }while(number !=0);  // End of loop

printf("\nSum of Digits of the number %d is %d",actnum,sum);
getch();
}   // End of main
