/*	   CPP07_07.C    	*/
/*	Using Pointer to Assign Array Elements*/
#include<stdio.h>
#include<conio.h>

void main()
{
int Roll[5]={101, 102, 103, 104, 105};
int *rptr, i;
rptr = &Roll[0];

for(i=0; i<5; i++)
 printf("\nAddress of Roll[%d] = %X ",i, (rptr+i));
}
