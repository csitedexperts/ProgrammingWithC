/*	CP07_53.C	*/
/*  Finding Factorial Using for Loop */
#include<stdio.h>
#include<time.h>
long Factorial (int n)
{
int i;
long f=1;
for (i=2; i<=n; i++)
 f= f*i;
return (f);
}
void main()
{
 int N;
 long F=1;
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
