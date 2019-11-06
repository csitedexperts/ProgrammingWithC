/*	   CP08_20.C    	*/
/* Finding Highest, Lowest and Average temp with times of a day */
 
#include<stdio.h>
#include<conio.h>
void main()
{
float t[50][2];
int i,j,n;
float max,min,s;
printf("How many reads ? ");
scanf("%d",&n);

for(i=0;i<n;i++)
{
printf("\nEnter read-%d ",i+1);
printf("\n-----------");
printf("\nEnter time (e.g. 12.30): ");
scanf("%f",&t[i][1]);
printf("Enter temperature in celsius (e.g. 27.5): ");
scanf("%f",&t[i][2]);
}
printf("   Time          Temerature");
printf("\n   ----          ----------");
for(i=0;i<n;i++)
printf("\n   %.2f            %.2f",t[i][1],t[i][2]);
max=t[1][2];
for(i=0;i<n;i++)
if(t[i][2]>max)
max=t[i][2];
printf("\nMaximum temperature : %.2f",max);
printf(" at : ");
for(i=0;i<n;i++)
if(t[i][2]==max)
printf(" %.2f",t[i][1]);
min=t[1][2];
for(i=0;i<n;i++)
if(t[i][2]<min)
min=t[i][2];
printf("\nMinimum temperature : %.2f",min);
printf(" at : ");
s=0;
for(i=0;i<n;i++)
{
s=s+t[i][2];
if(t[i][2]==min)
printf(" %.2f",t[i][1]);
}
printf("\nAverage temperature : %.2f",s/n);
printf("\n\t\t\t Thanks a lot! ");
getch();
}
