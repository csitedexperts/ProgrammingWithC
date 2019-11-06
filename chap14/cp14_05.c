/* CP14_05.C */
/* Sorting N numbers using Bubble Sort Algorithm */
#include<stdio.h>
#include<conio.h>

void main()
{
 int i,n,k,temp;
 int data[50];
 printf("Enter how many elements in the array(<50): ");
 scanf("%d",&n);
 printf("\nInput %d integers:",n);

 for (i=0;i<n;i++)
   scanf("%d",&data[i]);

 printf("\nOriginal elements:");
 for (i=0;i<n;i++)
  printf("%4d",data[i]);
 printf("\n\nAfter bubble sort ( ascending order)....\n");
 printf("\nThe elements are:");

 for(k=0;k<n;k++)
  {
   i=0;
    while(i<n-1)
    {
    if(data[i]>data[i+1])
    {
    temp=data[i];
    data[i]=data[i+1];
    data[i+1]=temp;
    }
   i=i+1;
  }
 }
 for (i=0;i<n;i++)
  printf("%4d",data[i]);

 getch();
}
