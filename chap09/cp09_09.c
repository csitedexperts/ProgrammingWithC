/*	   CP09_09.C    	*/
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
 printf("Elements of the Matrix:\n");

 for( i=0; i<ROW; i++)
  {
   for(j=0; j<COL; j++)
   printf("Marks[%d][%d]=%d \t",i, j,  *(*(Marks+i) +j));
   printf("\n");
  }
 }
