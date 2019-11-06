/*	CP08_08.C    	*/
/*	Assigning Array Elements with equivalent type value*/
#include<stdio.h>
#include<conio.h>
void main()
{
int Roll[5];
Roll[0]= 101;
Roll[1]= 102;
Roll[2]= 'A';
Roll[3]= 'B';
Roll[4]= 105;

printf("\nRoll[0] = %d", Roll[0]);
printf("\nRoll[1] = %d", Roll[1]);
printf("\nRoll[2] = %c", Roll[2]);
printf("\nRoll[3] = %c", Roll[3]);
printf("\nRoll[4] = %d", Roll[4]);
getch();
}
