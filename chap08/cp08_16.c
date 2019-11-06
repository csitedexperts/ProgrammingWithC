/*	CP08_16.C    	*/
/*	Program to find prime facrors of a positive integer number */

#include<stdio.h>
#include<conio.h>
void main()
 {
  int a[20], i, j=0, k;
  long n;
  printf("\nEnter a positive integer number :");
  scanf("%ld",&n);
  printf("\nPrime Factors of %ld are : ", n);
  for(i=2;i<=n;i++)
    {
       while(n%i==0)
	{
	 a[j]=i;
	 n=n/i;
	 j++;
	}
    }

  for(k=0;k<j;k++)
    printf("%4d",a[k]);
  getch();
 }
