/*    CP07_02.C	*/
/*	Using sqrt() library function */
#include <math.h>
#include <stdio.h>
main()
{
 double x, result;
 printf("Enter a positive number : ");
 scanf("%lf", &x);
 result = sqrt(x);
 printf("The square root of %lf is : %lf\n", x, result);

}
