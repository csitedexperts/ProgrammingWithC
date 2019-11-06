/*	   CP09_10.C    	*/
/*	Using Two Dim Array As Function Argument*/
#include<stdio.h>
#include<conio.h>
#define ROW  3
#define COL  3

void main()
{
int i, j; 
int Marks[ROW][COL]={
                {30, 35, 40},
		    {45, 50, 55}, 
                {60, 65, 70}
               };
 for(i=0; i<ROW; i++)
  {
   for(j=0; j<COL; j++)
   printf("Address of Marks[%d][%d]=%X\n",i, j,  (*(Marks+i) +j));
   }
 }
