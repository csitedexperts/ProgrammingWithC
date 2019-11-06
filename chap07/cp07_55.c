/*	CP07_55.C	*/
/* Calculating sum of the series 
ex = 1+x/1!+x2/2!+x3/3!+x4/4!+... +xn/n!  */

#include<stdio.h>
#include<conio.h>

float power(int x,int y)
{
 float i,p=1;
 for(i=1;i<=y;i++)
 p=p*x;
 return(p);
 }

int fact(int n)
 {
 if(n==0 || n==1)
    return(1);
  else
   return(n*fact(n-1));
 }

void main()
 {
 int i,n;
 float x, sum=1.0;
 printf("Enter an integer number for x : ");
 scanf("%f",&x);
 
 printf("Enter another number for n : ");
 scanf("%d",&n);

 for(i=1;i<=n;i++)
 {
 sum= sum +power(x, i)/fact(i);
 }
 printf("1+x/1!+x2/2!+x3/3!+x4/4!+... +xn/n! = %.2f", sum);
 getch();
}
