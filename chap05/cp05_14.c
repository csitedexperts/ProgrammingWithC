/*	 CP05_14.C		*/
/*	Testing Associativity of assignment (=) operator  */
#include<stdio.h>
#include<conio.h>
void main()
{
 int x = 10;
 printf("\n x = %d  ++x = %d  x = %d",x, x=x+1, x );
 getch();
}
