/* 	CP06_24.C 	*/
/* 	Program to display a pyramid. */
#include<stdio.h>
#include<conio.h>

void main()
{
int i,j,n;

printf("How many rows in your pyramid ? ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
 {
 gotoxy(10+j,10+i);
 printf("%d",j);
 }

for(j=0;j<=i;j++)
 {
 gotoxy(10-j,10+i);
 printf("%d",j);
 }
// printf("\n");
 }
getch();
}
