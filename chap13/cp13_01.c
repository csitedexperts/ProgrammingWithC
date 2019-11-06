/*	CP13_01.C	*/
/* Use of near Pointer 	*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int x=5, y=10;
 int near *xPtr, *yPtr;

 xPtr = &x;
 yPtr = &y;

 printf(" x = %d \n y = %d", x, y);
 printf("\n xPtr = %x  \n yPtr = %x", xPtr, yPtr);

 printf("\nAddress of x = %x", &x);
 printf("\nAddress of y = %x", &y);

getch();
}
