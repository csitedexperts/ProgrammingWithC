/*	CP06_36.C	*/
/* Calculating cos? */ 
#include<stdio.h>
#include<conio.h>

void main()
 {
  double x,s,j=1.0,y=1.0,sum=0.0;
 int i=2;
 printf("Enter the angle in degree : ");
 scanf("%lf",&s);
 x=((s*3.141592654)/180.0);

 while(j>0.0000001)
 {
 sum=sum+y;
 y=(-y)*((x*x)/(i*(i-1)));
 j=(y>0) ? y:(-y);
 i=i+2;
 }
 printf("\n cos(%.0lf) = %lf",s,(sum));
 
 getch();
 }
