/*	CP05_07.C
Example of Logical Operations */
#include <stdio.h>
void main(){
 int Op1=2, Op2=3, Op3=0;
 int Result1 = ((Op1 && Op2) || Op3);
 int Result2 = ((Op1 || Op2) && Op3);
 printf("((Op1 && Op2) || Op3)= %d", Result1);
 printf("\n((Op1 || Op2) && Op3)= %d", Result2);
}
