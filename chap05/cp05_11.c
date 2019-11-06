/*	 CP05_11.C		*/
/*	Example cast operation  */
#include <stdio.h>
 void main()
 {
 int a=15, b=10;
 float c;
 c = a/b;
 printf("\nWithout casting %d/%d = %.2f",a, b, c);

 c = (float)a/(float)b;  // casting both a and b 
 printf("\nCasting both operands %d/%d = %.2f",a, b, c);

 c = a/(float)b; // casting b only 
 printf("\nCasting second operand only %d/%d = %.2f",a, b, c);

}
