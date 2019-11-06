/*	CP09_01.C	*/
/* Using Pointer Variable	*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int x=5, y=10, *xPtr, *yPtr;
 xPtr = &x; yPtr = &y;
 printf("x = %d \ny = %d", x, y);
 printf("\nxPtr = %x  \nyPtr = %x", xPtr, yPtr);
 printf("\nAddress of x = %x", &x);
 printf("\nAddress of y = %x", &y);
}
