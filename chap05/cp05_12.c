/* CP05_12.CPP
Example of Casting  Operation*/
#include <stdio.h>
void main()
{
float  x  = 10, y = 5.5;
float R;
R =  x /y ; 	
printf("\nWithout casting %f/%f = %f ", x, y, R);
R =  x /(int)y ; // Using cast operation
printf("\nUsing cast operation %f/%f(int) = %f ", x, y, R);
}
