/*	CP05_04.C	*/
/*	Example of Arithmetic operation  */
#include <stdio.h>
void main() {
 int a=10, b=15, c=20, result;
 result = c/a;
 printf("\nDivision: %d / %d = %d",c, a, result);
 result = b % a;
 printf("\nModulo: %d %% %d  = %d", b, a, result);
 result = a* b +c;
 printf("\nExpression: %d * %d + %d = %d", a, b, c, result);
 result = a+b *c;
 printf("\nExpression: %d + %d * %d = %d", a, b, c, result);
}
