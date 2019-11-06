/*	   CP08_09.C    	*/
/*	Assigning Value to Array Elements*/
#include<stdio.h>
#include<conio.h>
void main()
{
int Roll[5];
float Marks[5];
int i;
for (i=0; i<5; i++)
 {
 printf("\nEnter Roll[%d] & Marks[%d] : ", i, i);
 scanf("%d %f",&Roll[i], &Marks[i]);
 }

for (i=0; i<5; i++)
 printf("\nRoll[%d]=%d Marks[%d]=%.2f",i,Roll[i],i,Marks[i]);
getch();
}
