/*	CP06_31.C	*/
/*	Finding Prime Factors of a number */
#include<stdio.h>
#include<conio.h>

void main()
{
  int i; 
  long n;
  printf("\nEnter a positive integer number : ");
  scanf("%ld",&n);
  printf("\nPrime Factors of %ld are : ", n);
  i = 2;

  while(i<=n)
    {
     while(n%i==0)
	{
	printf("%4d", i);
	 n=n/i;
	}
    i++;
    }
  getch();
}
