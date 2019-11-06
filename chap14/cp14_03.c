/*	   CP14_03.C    	*/
/* Inserting an element to a specific location of an array */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void  main()
{
 int Array[20],k,i,j,n,item;
 char ch;
 printf("\nHow many elements in the initial array (<10)? ");
 scanf("%d",&n);
 printf("\nInput %d integer numbers : ",n);
 for(i=0;i<n;i++)
  scanf("%d",&Array[i]);
    
printf("\nInitially the array contain ...");
 for(i=0;i<n;i++)
  printf("\nElement at position %d = %d",i,Array[i]);

Start:
 printf("\n\nInput a new element to insert: ");
 scanf("%d",&item);
 printf("Input the insertion position: ");
 scanf("%d",&k);

 j=n;
 while(j>=k)
  {
  Array[j+1]=Array[j];
  j=j-1;
  }
 Array[k]=item;
 n=n+1;

 printf("\nAfter inserting the new element ...\n ");
 for( i=0;i<n;i++)
  printf("\nElement at position %d = %d",i,Array[i]);

 printf("\nDo you want to continue(Y/y for yes) ? ");
 ch=getche();
 if(ch=='y'|| ch=='Y') 
   goto Start;
 else
   exit(0);
 getch();
}
