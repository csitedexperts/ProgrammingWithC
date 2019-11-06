/*	CP06_32.C	*/
/*	Calculating G.C.F. and L.C.M. of two numbers */
#include<stdio.h>
#include<conio.h>
main()
 {  
 int m,n,u,v,temp;
 int om, on;
 printf("\nEnter two nonnegative integers : ");
 scanf("%d %d",&m,&n);
 om = m, on = n;
 printf("\nGreatest Common Factor of %d and %d is : ",om,on);
 u=m;
 v=n;

 while(n!=0)
  {
   temp=m%n;
   m=n;
   n=temp;
  }
 printf("%d",m);
 printf("\nLowest Common Multiple of %d and %d is : %d", om, on, m*u/m*v/m);
 getch();
}
