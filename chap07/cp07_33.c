/*	 CP07_33.C  */
/*	 Using Register Variable */
#include<stdio.h>
void main()
{
register int i = 1, Max = 5;
for( i ; i<=Max; i++)
  printf("\nSquare of %d =%2d", i, i*i);
}
