/* CP14_07.C */
/* Sorting N numbers using Selection Sort Algorithm */
#include<stdio.h>
#include<conio.h>
#define MAXSIZE 20

int main()
{
int i=0, j=0, k=0, n, min;

int A[MAXSIZE];

printf("How many elements in the array(<=20)? ");
scanf("%d",&n);
printf("\nInput %d integer numbers : ",n);
for (i=0;i<n;i++)
  scanf("%d",&A[i]);

/* Selection sort alg. codes given below  */

for (i=0;i<n-1;i++)
 {
 min = i;
for ( j = i+1; j<n; j++)
 {
  if(A[min] > A[j])
    min = j;
}

if( min != i)
{
k = A[i];
A[i] = A[min];
A[min] = k;
}
}

/* Selection sort alg. codes given above  */
printf("\nAfter Selection sort ( ascending order)....\n");
printf("\nThe sorted numbers are   : ");

for(j = 0; j<n; j++)
  printf("%d  " , A[j]);

getch();
}
