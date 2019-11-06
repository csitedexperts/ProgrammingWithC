/*	CP07_50.C	*/
/*	Finding Factorial using Recursive Function */
#include<stdio.h>
#include<conio.h>

long fact(int n)
 {
  if(n==0 || n==1)
    return 1;
  else
    return (n*fact(n-1));
 }

void main()
 {
  int N;
  long F;
XX:
  printf("\nEnter a Positive integer : ");
  scanf("%d", &N);
 if (N<0)
   goto XX;
  F = fact(N);
  printf("\n%d! = %ld",N,F);
  getch();
 }
