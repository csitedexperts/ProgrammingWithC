/*	CP07_54.C	*/
/* Calculating Pmutation (nPr) and Combination (nCr) */
#include<stdio.h>
#include<conio.h>

fact(int n)
{
 if(n==0|| n==1)
  return(1);
 else
  return(n*fact(n-1));
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
