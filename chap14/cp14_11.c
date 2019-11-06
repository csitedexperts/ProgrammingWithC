/* CP14_11.C */
/* Searching an item from an array of N numbers using Binary search algorithm  */

#include<stdio.h>
#include<conio.h>
#define size 10
void main()
{
 char ch;
 int data[size]={12,23,34,45,56,76,89,98,100,145};
 int item,beg=0,end=size-1,mid;

 mid=(int)((beg+end)/2);

start:

  printf("\nEnter which number do you search ? ");
  scanf("%d",&item);
  while(beg<end && item!=data[mid])
   {
   if(item<data[mid])
   end=mid-1;
   else
     beg=mid+1;
   mid=(int)((beg+end)/2);
   }

  if(data[mid]==item)
   {
   printf("\nThe item is in the array at location : %d",mid);
   }
  else
    printf("\nThe item is not in the array");

  printf("\n\nDo you want to continue(y/Y):");
  ch=getche();
  if (ch=='y'|| ch == 'Y')
    goto start;
  else 
   exit(0);
  
 getch();
}
