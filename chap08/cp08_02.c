/*	   CP08_02.C    	*/
/*	Assigning value to char type array elements*/
#include<stdio.h>
#include<conio.h>
void main()
{
char Name[5] ="MASUD";
int i;
for (i=0; i<5; i++)
  printf("%c", Name[i]);
}
