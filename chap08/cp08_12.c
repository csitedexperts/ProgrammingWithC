/*	CP08_12.C    	*/
/*	Program to show first N consecutive fibancci numbers*/
#include<stdio.h>
#include<conio.h>
#define MAX  20

void main()
{
 int i, N;
 long int fibo[MAX];
 fibo[0]=1;
 fibo[1]=1;
 printf("How many fibonacci numbers (<=20)? ");
 scanf("%d", &N);
 printf("\nFirst %d consecutive fibonacci numbers are:\n", N);

 for(i=2;i<=N;i++)
  fibo[i]=fibo[i-2]+fibo[i-1];
   for(i=0;i<N;i++)
   printf("%ld  ",fibo[i]);

 getch();
}
