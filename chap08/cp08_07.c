/*	   CP08_07.C    	*/
/*	Assigning Array Elements with nonequivalent type value*/
#include<stdio.h>
#include<conio.h>
void main()
{
int Roll[5];
int i;
Roll[0]= 101;
Roll[1]= 102;
Roll[2]= 10.3;
Roll[3]= 104;
Roll[4]= 10.5;
for (i=0; i<5; i++)
  printf("\nRoll[%d] = %d",i, Roll[i]);
}
