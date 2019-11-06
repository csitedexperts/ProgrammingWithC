/*	 CP04_14.C
Using %m.nf Specifiers */
#include <stdio.h>
void main()
{
float x =125;
printf("\nx =%f", x);		// Using %f
printf("\nx =%10.0f", x);	// Using %10.0f
printf("\nx =%10.1f", x);	// Using %10.1f 
printf("\nx =%10.2f", x);	// Using %10.2f
printf("\nx =%10.3f", x);	// Using %10.3f
printf("\nx =%10.4f", x);	// Using %10.4f

printf("\n");	

printf("\nx =%f", x);		// Using %f
printf("\nx =%.0f", x);		// Using %.0f
printf("\nx =%.1f", x);		// Using %.1f 
printf("\nx =%.2f", x);		// Using %.2f
printf("\nx =%.3f", x);		// Using %.3f
printf("\nx =%.4f", x);		// Using %.4f

}
