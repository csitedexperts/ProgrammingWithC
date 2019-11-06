/*	CP08_18.C    	*/
/*	Program to find L.C.M. (Lowest Common Multiple) of N positive integer numbers */

#include<stdio.h>
#include<conio.h>
int main()
 {
 int s[10],u,v,n,temp, i;
 printf("How many numbers (<=10)? ");
 scanf("%d",&n);
 printf("Enter %d positive integer numbers : ", n);

 for(i=0;i<n;i++)
  scanf("%d",&s[i]);
 for(i=0;i<n-1;i++)
   {
   u=s[i];
   v=s[i+1];
   while(v!=0)
   {
    temp=u%v;
    u=v;
    v=temp;
   }
  s[i+1]=u*s[i]/u*s[i+1]/u;
  }
 printf("\nThe Lowest Common Multiple is : ");
 printf("%d",s[n-1]);
 getch();
}
