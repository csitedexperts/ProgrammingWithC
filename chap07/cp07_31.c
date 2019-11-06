/*	CP07_31.C	*/
/*	Use of External variable */
#include<stdio.h>
#include<conio.h>

#include<c:\Add.c>
#include<c:\Sub.c>

float Value1, Value2, Result;  // Global Declaration
int main() 
{
printf("Enter Value1 : ");
scanf("%f", &Value1);
printf("Enter Value2 : ");
scanf("%f", &Value2);

Result = Add(Value1, Value2);
printf("\n %.2f + %.2f = %.2f", Value1, Value2, Result);

Result = Sub(Value1, Value2);
printf("\n %.2f - %.2f = %.2f", Value1, Value2, Result);

getch();
return 0;
}
