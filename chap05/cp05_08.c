/*	CP05_08.C
Bitwise OR Operations*/
#include <stdio.h>
void main()
{
int Op1=2, Op2=5;
int BitwiseOR, LogicalOR, BitwiseNot;
int LSValue, RSValue ;

BitwiseOR= Op1 | Op2;
LogicalOR= Op1 || Op2 ;
printf(" \n Bitwise OR of %d and %d is : %d", Op1, Op2, BitwiseOR);
printf(" \n Logical OR of %d and %d is : %d", Op1, Op2, LogicalOR);
LSValue = Op2 << 2;

printf("\n 2 times left shift of %d is: %d", Op2,LSValue);
RSValue = Op2 >> 1;

printf("\n 1 time right shift of %d is: %d", Op2, RSValue);
}
