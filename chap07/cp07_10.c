//	CP07_10.C
/* C++ Style Function Definition With Prototype*/
#include<stdio.h>
#include<conio.h>
int Sum();		// Function Prototype
main()
{
 Sum();	  // Function Call
}
int Sum()		// Function Definition
{
 int Value1, Value2, Sum;
 printf("Enter Value1 : ");
 scanf("%d", &Value1);
 printf("Enter Value2 : ");
 scanf("%d", &Value2);
 Sum = Value1 + Value2;
 printf("Value1 = %d \nValue2 = %d", Value1, Value2);
 printf("\nSum =%d", Sum);
 return (Sum);
}
