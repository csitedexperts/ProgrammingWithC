/*	CP07_08.C	*/
/* Demonestration of user-defined function */
#include<stdio.h>
#include<conio.h>
Sum()		// Function Definitin
{
 int Value1, Value2, Sum; 
 printf("\nEnter two integer numbers : " );
 scanf("%d %d", &Value1, &Value2);
 Sum = Value1 + Value2;
 printf("\nSum of %d and %d is : %d", Value1, Value2, Sum);
}

main()
{
 Sum();	//  Sum() Function Call
 getch();	//  Library function call
}
