/*	CP07_09.CPP	*/
/* C++ Style Function Definition Without Prototype*/
/*  This Program will show an Error*/

#include<stdio.h>
#include<conio.h>
int main()
{
 Sum();	  // Calling Sum() Function 
 getch();	  // Calling getch() Function
 return 0;
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
