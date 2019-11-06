/*	   CP09_08.C    	*/
/*	Using Two Dim Array As Function Argument*/
#include<stdio.h>
#include<conio.h>
#define ROW  3
#define COL  3

void main()
{
 int Marks[ROW][COL]={
                {30, 35, 40},
		    {45, 50, 55}, 
                {60, 65, 70}
               };
 int i, *mptr;
 mptr = &Marks[0][0];
 printf("Elements of the Matrix:\n");

 for( i=0; i<9; i++)
  {
   printf("%d \t", *(mptr+i));
   if (i==2||i==5)
    printf("\n");
  }
 }

