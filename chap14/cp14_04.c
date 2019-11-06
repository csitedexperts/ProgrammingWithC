/*	   CP14_04.C    	*/
/* Deleting an element from a specific location of an array */
#include<stdio.h>
#include<conio.h>
void  main()
{
int Array[20],k,i,j,n,item;
char ch;
printf("How many elements in the initial array (<20)? ");
scanf("%d",&n);

printf("Input %d integer numbers : ",n);
for(i=0;i<n;i++)
 scanf("%d",&Array[i]);

printf("\nInitially the array contain ...");
for(i=0;i<n;i++)
 printf("\nElement at position %d = %d",i,Array[i]);
Start:
printf("\nEnter position of the element to be deleted : ");
scanf("%d",&k);
item=Array[k];

for(j=k;j<=n-1;j++)
 Array[j]=Array[j+1];
 n=n-1;
 printf("\nAfter deleting the  element (%d)...\n ",item);

 printf("\nThe array contains ...");
for( i=0;i<n;i++)
 printf("\nElement at position %d = %d",i,Array[i]);

 printf("\n\nDo you want to continue(Y/y for yes) ? ");
 ch=getche();
 if(ch=='y'|| ch=='Y') 
   goto Start;
 else
   exit(0);
 
 getch();

}
