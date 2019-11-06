/*	CP07_15.C	*/
/* Function call that effects on return value*/ 
#include<stdio.h>
#include<conio.h>
float Total();
int main()
{
float Tutorial, GTotal;
printf("Enter Tutorial Marks : ");
scanf("%f", &Tutorial);

GTotal = Total() + Tutorial;
printf("\nGrand Total : % .2f", GTotal);
getch();
return 0;
}
