/* 	CP07_24.C	*/
/*	Examle of using global variables */
#include<stdio.h>
#include<conio.h>
int Sum();	// Sum() Function Prototype
int Mul();	// Mul() Function Prototype

int x=10, y=20;      	// x, y are Global Variables

void main()
{
      
printf("\nInside main() ......");
printf("\nx= %d y= %d", x, y);
Sum();
Mul();
getch();
}
int Sum()
{
int S = x + y;
printf("\nInside Sum() ......");
printf("\n%d + %d = %d", x, y, S);
return S;
}
int Mul()
{
int M = x * y;
printf("\nInside Mul() ......");
printf("\n%d * %d = %d", x, y, M);
return M;
}
