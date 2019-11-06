/*	CP07_43.C	*/
/*	Example of using User Defined Macro*/
#include<stdio.h>
#include<conio.h>
#define Sum(x, y) ( (x)+(y) )
#define Max(x, y) ( (x)>(y) ? (x): (y))
#define THANKS printf("\nThanking you.....");
void main()
{
int x=5, y=10;

printf("\nSum of %d and %d is: %d", x, y, Sum(x, y));
printf("\nMax of %d and %d is: %d", x, y, Max(x, y));
THANKS; 	// Calls THANKS macro 

getch();
}
