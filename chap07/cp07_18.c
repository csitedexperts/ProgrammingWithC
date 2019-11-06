/*	CP07_18.C	*/
/* Calculating Permutation Series */

#include<stdio.h>
#include<conio.h>

int Perm(int x, int y);
int Fact(int n);

main()
 {
 int i, j;

 for( i=5; i>=1; i--)     // Outer for loop
  {
   for( j=i; j>=1; j--)  // Inner for loop
   {
    printf("P(%d, %d) =%4d  ", i, j, Perm(i, j));
   }
  printf("\n");
  }
 getch();
 }

int Perm(int x, int y)
 {
  return (Fact(x)/Fact(x-y));
 }

int Fact(int n)
{
int i, f=1;
for (i=1; i<=n; i++)
  f= f*i;
return (f);
}
