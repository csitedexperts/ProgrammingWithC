/*	   CP08_21.C    	*/
/*	Adding 2 Two Dim Array*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int Matrix1[3][3];
 int Matrix2[3][3];
 int Matrix3[3][3];
 int i, j;
 
 printf("\nEnter elements of Matrix1 (3x3):\n");
 for(  i=0; i<3; i++)
  {
  for( j=0; j<3; j++)
  scanf("%d", &Matrix1[i][j]);
  }
 printf("\nEnter elements of Matrix2 (3x3):\n");
 for( i=0; i<3; i++)
 {
 for(j=0; j<3; j++)
  scanf("%d", &Matrix2[i][j]);
 }
 printf("\nMatrix1:\n");
 for( i=0; i<3; i++)
  {
  for(j=0; j<3; j++)
   printf("%d ", Matrix1[i][j]);
   printf("\n");
  }
  printf("\nMatrix2:\n");
  for( i=0; i<3; i++)
  {
  for(j=0; j<3; j++)
   printf("%d ", Matrix2[i][j]);
   printf("\n");
  }
  for( i=0; i<3; i++)
  {
  for(j=0; j<3; j++)
   Matrix3[i][j] =  Matrix1[i][j]+Matrix2[i][j];
  }
  printf("\nAddition of the Matrices:\n");
  for( i=0; i<3; i++)
  {
  for(j=0; j<3; j++)
   printf("%4d ", Matrix3[i][j]);
   printf("\n");
  }
 getch();
}
