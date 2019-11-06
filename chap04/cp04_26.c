/*	 CP04_26.C		*/
/*	Display in Exp. Format using %e Specifier  */
#include <stdio.h>
void main()
{
double Value1 = 3.5, Value2= 3.5E02;
double sum;
sum = Value1+ Value2;
printf("\n Value1 = %e", Value1); 
printf("\nValue2 = %e", Value2);
printf("\nsum= %e", sum); 
}
