/*    CP07_01.C	*/
/*	Using  pow() library function */
#include <stdio.h>	// for printf() Function
#include <math.h>		// for pow() Function

main()
{
 float x, n;
 long float result;
 printf("To calculate 'x' to the power 'n' \n");
 printf("\nfirst enter a value for 'x' : ");
 scanf("%f", &x);
 printf("then enter another value for 'n' : ");
 scanf("%f", &n);

 result = pow(x, n);	// Using true format
 printf("\n%f to the power %f is : %lf ", x, n, result);
}
