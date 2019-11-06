/*	CP06_39.C	*/
/*	Example of do--while loop Statement */
#include<stdio.h>
#include<conio.h>

void main()
{
int number, rightdigit;
printf("\nEnter your number: ");
scanf("%d", &number);
printf("\nThe Number in reverse order is : ");

do
{
    rightdigit = number %10;
    printf("%d", rightdigit);
    number = number/ 10;
   }while(number !=0);  // End of do
getch();
}   // End of main
