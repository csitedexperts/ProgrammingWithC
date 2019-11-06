/*	   CP08_01.C    	*/
/*	Assigning value to char type array elements*/
#include<stdio.h>
#include<conio.h>
void main()
{
 char Name[5] { 'M', 'A', 'S', 'U', 'D'};
 int i;
 for (i=0; i<5; i++)
   printf("%c", Name[i]);
 getch();
}
