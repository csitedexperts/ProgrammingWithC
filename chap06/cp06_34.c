/*	CP06_34.C	*/
/* Pyramid Display */
#include<stdio.h>
#include<conio.h>
void main()
{
int i,j,n;
i=0;
printf("How many rows in your pyramid ? ");
scanf("%d",&n);

while(i<n)
{
j=0;

while(j<=i)
 {
 gotoxy(10+j,10+i);
 printf("%d",j);
 j++;
 }
j=0;

while(j<=i)
 {
 gotoxy(10-j,10+i);
 printf("%d",j);
 j++;
 }

 i++;
// printf("\n");
 }

getch();
}
