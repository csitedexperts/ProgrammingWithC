/*	CP06_35.C	*/
/* Calculating sin? */ 

#include<stdio.h>
#include<conio.h>

void main()
 {
 double x,s,a=1.0,y,sum=0.0;
 int i=2;
 printf("Enter the angle in degree : ");
 scanf("%lf",&s);
 x=((s*3.14159264)/180.0);
 y=x;

 while(a>0.0000001)
 {
 sum=sum+y;
 y=(-y)*((x*x)/(i*(i+1)));
 a=(y>0) ? y:(-y);
 i=i+2;
 }
 printf("\nsin(%.0lf) = %lf",s,sum);
 getch();
 }
