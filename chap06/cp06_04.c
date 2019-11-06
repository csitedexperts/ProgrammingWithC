/*	CP06_04.C	*/
/*	Example of if..else Control*/
#include<stdio.h>
main()
{
int Year;
printf("Enter the year to be tested: ");
scanf("%d", &Year);
if( (Year%4==0 && Year%100 !=0)|| Year%400==0)
 printf("\n%d is a leap year.", Year);
else
 printf("\n%d is not a leap year.", Year);
}
