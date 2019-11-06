/*	CP08_17.C    	*/
/*	Program to find G.C.F. (Greatest Common Factor) of N positive integer numbers */
#include<stdio.h>
#include<conio.h>
void main()
 {
 int m[10],n,i,j,temp=0;
 printf("How many numbers (<=10)? ");
 scanf("%d",&n);
 printf("Enter %d positive integer numbers : ", n);
 for(i=1;i<=n;i++)
  scanf("%d",&m[i]);

  for(i=1;i<=n-1;i++)
   for(j=1;j<=n;j++)
    while(m[j+1]!=0)
    {
     temp=m[j]%m[j+1];
     m[j]=m[j+1];
     m[j+1]=temp;
    }
 printf("The Greatest Common Factor is : ");
 printf("  %d",m[1]);
 getch();
 }
