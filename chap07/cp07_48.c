/*	CP07_48.C	*/
/*	Example of ## directive*/
#include<stdio.h>
#include<conio.h>
#define N(i)n##i

int main()
{
 int N(1)=10, N(2)=20;
 printf("\nn1 = %d", n1);
 printf("\nn2 = %d", n2);
getch();
return 0;
}
