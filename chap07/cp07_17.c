/*	CP07_17.C	*/
/* Calculating Pmutation (nPr) and Combination (nCr) */
#include<stdio.h>
#include<conio.h>

fact(int n)
{
 int i, f=1;
 for (i=1; i<=n; i++)
   f= f*i;
 return (f);
}

void main()
{
int n,r;
XX:
  printf("Enter n and r (r=<n) : ");
  scanf("%d %d",&n,&r);
 if(r>n)
  {
  printf("r must not be greater than n : \n");
  goto XX; 
 }
 printf("\n n! = %d",fact(n));
 printf("\n r! = %d",fact(r));
 printf("\n (n-r)! = %d",fact(n-r));
 printf("\n nPr = %d",fact(n)/fact(n-r));
 printf("\n nCr = %d",fact(n)/(fact(r)*fact(n-r)));

 getch();
}
