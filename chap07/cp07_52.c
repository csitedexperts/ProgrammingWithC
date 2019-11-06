/*	CP07_52.C	*/
/*	Finding Factorial  Using Recursive Method */
#include<stdio.h>
#include<time.h>
long Factorial (int n)
{
if (n <=1)
 return 1;
else
 return (n * Factorial(n-1));
}
void main()
{
  int N;
  long F;
  time_t  STime, ETime;  // time_t variables
 XX:
  printf("\nEnter a Positive integer: ");
  scanf("%d", &N);
  time(&STime);  // timer starts
  if (N<0)
    goto XX;
 
  F = Factorial(N);
  printf("\nFactorial of %d = %ld",N, F);
  time(&ETime);  // timer stops
  printf("\nProcessing Time: %f sec.",(ETime-STime)/CLK_TCK);
}
