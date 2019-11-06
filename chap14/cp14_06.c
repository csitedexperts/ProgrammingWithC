/* CP14_06.C */
/* Sorting N numbers using Quick Sort Algorithm */
#include<stdio.h>
#include<conio.h>
#define SIZE 20
int  partition();
void swap();
void quicksort(int a, int b);
int  A[SIZE];

void main()
{
 int a=0,b,i,n;
 printf("\nHow many numbers do you want to sort ? ");
 scanf("%d",&n);
 printf("\nEnter %d integer numbers :", n);

 for(i=0; i<n; i++)
   scanf("%d",&A[i]);
 b=n-1;
 quicksort(a,b);
 printf("\nThe sorted numbers are:");
 for(i=0; i<n; i++)
  printf("%4d", A[i]);
 getch();
 }

void swap(int i, int j)
 {
  int temp;
  temp=A[i];
  A[i]=A[j];
  A[j]=temp;
 }

int partition(int a, int b)
 {
 int pivot, lower, upper;
 pivot=A[a]; lower=a+1; upper=b;

 do
  {
  while(A[upper]>pivot && lower<=upper)
    upper--;
  while(A[lower]<=pivot && lower<=upper)
	lower++;
 
 if(lower<=upper)
   {
    swap(lower,upper);
    lower++; upper--;
    }
   }
  while(lower<=upper);
  swap(a, upper);
 return(upper);
}

void quicksort(int a, int b)
 {
  int k;
  if(a<b)
  {
   k=partition(a,b);
   quicksort(a,k-1);
   quicksort(k+1,b);
  }
 }
