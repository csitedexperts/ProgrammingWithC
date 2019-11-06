/*	CP09_03.C	*/
/* Using Pointer Variable	*/
#include<stdio.h>
#include<conio.h>

void main()
{
 int x=5, p; 
 float *y;
 y = (float*)&x;		// y = &(float)x;  Illegal 
 p =*y;

 printf(" x =%d\n" , x);
 printf("Address of  x =%x" , &x);
 printf("\nData  at %x =%d", y, p);
}
