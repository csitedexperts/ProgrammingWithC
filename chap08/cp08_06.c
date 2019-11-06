/*	   CP08_06.C    	*/
/*	Assigning Value to Array Elements*/
#include<stdio.h>
#include<conio.h>
void main()
{
int Roll[5];
int i;
Roll[0]= 101;
Roll[1]= 102;
Roll[2]= 103;
Roll[3]= 104;
Roll[4]= 105;
for ( i=0; i<5; i++)
 printf("\nRoll[%d] = %d",i, Roll[i]);
}
