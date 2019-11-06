/*	CP07_20.C	*/
/* Calculating sum of the series 
x+x2/2!+x4/4!+............+xn/n!  */

#include<stdio.h>
#include<conio.h>

float power(float p,int q)
 {
  int i;
  float s=1.0;
 if (q==0)
   return(p);
 else
   for( i=0;i<q;i++)
    s=s*p;
  return(s);
 }

 long fact(int n)
 {
  int i, f=1;
  if (n <=1)
    return 1;
  else
   {
   for (i=1; i<=n; i++)
     f= f*i;
   return (f);
  }
 }

 void main()
 {
 
 int i,n;
 float x,sum=0.0;
 printf("Enter an integer number for x : ");
 scanf("%f",&x);
 
 printf("Enter another number for n : ");
 scanf("%d",&n);

 for(i=0;i<=n;i=i+2)
 {
 sum=sum+(power(x,i)/fact(i));
 }

 printf("\nx+x2/2!+x4/4!+...+xn/n!=%.2f",sum);

 getch();
 }
