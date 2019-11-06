/*    CP07_05.C	*/
/*	Using sin(x)  library function  to calculate sin(x) of Trigonometric angle in degree */
#include <stdio.h>
#include <math.h>
#define PI 3.142857
main()
{
 double result, x;
 printf("To find sin(x degree) enter a vlaue for 'x' : ");
 scanf("%lf", &x);
 result = sin(x*PI/180);
 printf("The sin(%lf degree) is : %lf\n", x, result);
}
