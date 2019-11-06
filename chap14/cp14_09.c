/* CP14_09.C */
/* Sorting N numbers using Merge Sort Algorithm */
#include<stdio.h>
#include<conio.h>
int A[50],n;
void merge(int low,int mid,int high)
 {
  int h=low,i=low,j=mid+1,k,B[50];
  while(h<=mid && j<=high)
  {
  if (A[h]<A[j])
  {
   B[i]=A[h];
   h++;
   }
   else {
   B[i]=A[j];
   j++;
   }
   i=i+1;
  }
  if (h>mid)
  {
  for(k=j;k<=high;k++)
  {
  B[i]=A[k];
  i++;
  }
  }
  else {
  for(k=h;k<=mid;k++)
  {
  B[i]=A[k];
  i++;
 }
 }

 for( k=low;k<=high;k++)
  A[k]=B[k];
 }

void mergesort(int low,int high)
  {
   int mid;
   if(low<high)
    {
    mid=(int)((low+high)/2);
    mergesort(low,mid);
    mergesort(mid+1,high);
    merge(low,mid,high);
   }
 }

void display()
 {
  int i;
  printf("\n\nAfter Merge sort ( ascending order)....\n");
  printf("\nThe elements are : ");
  for(i=0;i<n;i++)
   printf("%d ", A[i]);
  getch();
 }

int main()
 {
  int i,low=0,high;
  printf("\nHow many elements in the array(<=50)? ");
  scanf("%d",&n);
  printf("\nEnter %d integer numbers : ",n);
  for(i=0;i<n;i++)
    scanf("%d",&A[i]);
  high=n-1;
 mergesort(low,high);
 display();

getch();
return 0;
}
