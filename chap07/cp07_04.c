/*    CP07_04.C	*/
/*	Using sin(x) library function */
#include <stdio.h>
#include <math.h>
int main(void)
{
 double x, result;
 printf("To find sin(x) enter a vlaue for 'x' : ");
 scanf("%lf", &x);
 result = sin(x);
 printf("The sin(%lf) is : %lf\n", x, result);
 }
