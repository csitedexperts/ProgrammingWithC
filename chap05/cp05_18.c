/* CP05_18.C 	*/
/*	Testing Precsedenc of unary and binary operators  */
#include <stdio.h>
#include <conio.h>

void main()
{
 int Op1=5, Op2=10, Op3=15;
 int Result;
 Result = Op1+Op2<Op3;
 printf("%d+%d<%d = %d", Op1,Op2, Op3, Result);
}
