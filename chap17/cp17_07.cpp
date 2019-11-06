/*	CP17_07.C	*/
/*	Using Referrence Variable */
#include <stdio.h>
void main()
{
int x = 5;
printf("\nx = %d", x);
int &y = x;
 // y refers to x
printf("\ny = %d", y);
y= 10; // changiny y
printf("\nAfter changing y");
printf("\nx = %d", x);
printf("\ny = %d", y);
}
