/*	   CP08_23.C    	*/
/*	Using Array As Function Argument*/
#include<stdio.h>
#include<conio.h>
#define  MAX  10

float Show(float Marks[], int N);   // Function Prototype
float Sort(float Marks[], int N);   // Function Prototype
void main()
{
 
 float Marks[MAX];
 int i, N;
 printf("How many number of Marks (<=10)? ");
 scanf("%d", &N);

 printf("\nEnter Marks: ");
 for(i=0; i<N; i++)
  scanf("%f", &Marks[i]);

 printf("\n\nUnsorted Marks: ");
 Show(Marks, N);

 printf("\nSorted Marks: ");
 Sort(Marks, N);
 Show(Marks, N);
 getch();
}
float Show(float Marks[], int N)   // Function Definition
 {
 int i;  
 for( i=0; i<N; i++)
   printf("%.2f ", Marks[i]);
 }
float Sort(float Marks[], int N)   // Function Definition
{
 float temp;
 int i, j;
 
 for(i=0; i<=N-1; ++i)
 {
  for ( j=0; j<=N-2; ++j)
    if (Marks[i]>Marks[j])
    {
     temp = Marks[i];
     Marks[i] = Marks[j];
     Marks[j] = temp;
    }
 }
}
