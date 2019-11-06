/*	CP13_02.C	*/
/* Problem in using near Pointer */
#include<stdio.h>
#include<conio.h>

void main()
{
 int x, y; 
 int near *xPtr, *yPtr;
 xPtr = 0xfffa;
 yPtr = 0xfffe;

 printf("\n xPtr   = %x", xPtr);
 printf("\t ++xPtr = %x", ++xPtr);

 printf("\n yPtr   = %x", yPtr);
 printf("\t ++yPtr = %x", ++yPtr);

getch();
}
