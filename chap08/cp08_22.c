/*	   CP08_22.C    	*/
/* Multiplication of two matrices */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,k,m,n,p,a[5][5],b[5][5],c[5][5];
printf("How many rows in first/columns in second matrix ? ");
scanf("%d",&p);
printf("How many columns in first matrix ? ");
scanf("%d",&m);
printf("How many rows in second matrix ? ");
scanf("%d",&n);
printf("Enter the first matrix (%d x %d)\n",p,m);
for(i=0;i<m;i++)
 {
 for(j=0;j<p;j++)
   scanf("%d",&a[i][j]);
 }
printf("Enter the second matrix (%d x %d)\n",n,p);
for(i=0;i<p;i++)
 {
 for(j=0;j<n;j++)
  scanf("%d",&b[i][j]);
 }
printf("\nFirst  matrix ......\n");
for(i=0;i<m;i++)
 {
 for(j=0;j<p;j++)
  {
  printf("%5d",a[i][j]);
  }
 printf("\n");
 }
printf("\nSecond  matrix......\n");

for(i=0;i<p;i++)
{
for(j=0;j<n;j++)
 {
  printf("%5d",b[i][j]);
 }
printf("\n");
}

printf("\nMatrix multiplication..........\n");
for(i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
  {
  c[i][j]=0;
  for(k=0;k<p;k++)
    c[i][j]=c[i][j]+a[i][k]*b[k][j];
  }
 }

for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
 { 
  printf("%5d",c[i][j]);
  } 
 printf("\n");
 }
getch();
}
