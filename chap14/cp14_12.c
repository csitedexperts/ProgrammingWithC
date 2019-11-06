/* 	CP14_12.C 	*/
/* Merging 	two Array in a single Array */

#include<stdio.h>
#include<conio.h>
#define max 20

int a[max],b[max],c[max];
int r,s,ptr;

int merging();

int main()
{
 int i;
 printf("How many elements in first array (<=10)? ");
 scanf("%d",&r);
 printf("Enter %d integer elements : ", r );

 for(i=1;i<=r;i++)
  scanf("%d",&a[i]);
 printf("How many elements in second array (<=10)? ");
 scanf("%d",&s);
 printf("Enter %d integer elements : ", s );

 for(i=1;i<=s;i++)
  scanf("%d",&b[i]);

 merging();
 
 printf("After merging the both array \n");
 printf("The combimed array contains  :");
 
for(ptr=1;ptr<=(r+s);ptr++)
  printf("%d ", c[ptr]);
 
return 0;
}

/***********	Here is the merging  Procedure  **********/
int merging()
{     
 int na,nb,k;
 na=nb=ptr=1;
 while(na<=r && nb<=s)
  {
   if(a[na]<b[nb])
   {
   c[ptr]=a[na];
   ptr++;
   na++;
   }
  else
  {
   c[ptr]=b[nb];
   ptr++;
   nb++;
   }
 }
 if(na>r)
   {
   for(k=0;k<=s-nb;k++)
   c[ptr+k]=b[nb+k];
    }
   else
    {
    for(k=0;k<=r-na;k++)
     c[ptr+k]=a[na+k];
   }

return ;
}
