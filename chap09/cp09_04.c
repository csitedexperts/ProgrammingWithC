/*	CP09_04.C	*/
/* Example of Pointer Operation	*/
#include<stdio.h>
#include<conio.h>

void main()
{
int x=30, y=15, *xptr, *yptr;
int v1, v2;
float v3; 
xptr = &x; 
yptr = &y;

v1 = (*xptr)+(*yptr);
		// Equivalent to v1=x+y
v2 = (*xptr)*(*yptr) +10;
		// Equivalent to v2=x*y + 10
v3 = (*xptr)/(*yptr);
		// Equivalent to v3=x/y
printf("x =*xptr= %d", *xptr);
printf("\ny =*yptr= %d" , *yptr);
printf("\n(*xptr)+(*yptr)= %d", v1);
printf("\n(*xptr)+(*yptr)+10= %d", v2);
printf("\n(*yptr)/(*xptr) = %.2f", v3);
}
