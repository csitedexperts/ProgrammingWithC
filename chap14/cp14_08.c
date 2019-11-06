/* CP14_08.C */
/* Sorting N numbers using Insertion Sort Algorithm */

#include<stdio.h>
#include<conio.h>

void main()
{
 int i,n,k,temp, ptr;
 int data[25];
 printf("Enter how many elements in the array(<25): ");
 scanf("%d",&n);
 printf("\nInput %d integers:",n);
 for (i=0;i<n;i++)
   scanf("%d",&data[i]);

 printf("\n\nAfter Insertion sort ( ascending order)....\n");
 printf("\nThe elements are:");

 for(k=0;k<n;k++)
 {
   temp = data[k];
   ptr = k-1 ;

  while (ptr>0 && temp<data[ptr])
    {
     data[ptr+1] = data[ptr];
     ptr--;
    }

  data[ptr+1] = temp;
 }

 for (i=0;i<n;i++)
 printf("%4d",data[i]);

 getch();
}
