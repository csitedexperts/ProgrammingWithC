/*	   CP08_05.C    	*/
/*	Assigning array elements without Array Size*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int Roll[] = {101, 102, 105, 106, 107};
for (i=0; i<7; i++)
printf("\nRoll[%d] = %d", i, Roll[i]);
}
