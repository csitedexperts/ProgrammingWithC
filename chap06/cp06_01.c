/*	CP06_01.C	*/
/* 	Program to find largest (maximun) of 3 integer numbers */
#include<stdio.h>
#include<conio.h>
main()
{
int a,b,c;

printf("Input three integer numbers: ");
scanf("%d %d %d",&a, &b, &c);
if(a>b)   // when a>b
 {
  if(a>c)
   printf("%d is the large number",a);
  else
   printf("%d is the large number",c);
 }
 else     // when a<b
  {
  if(b>c)
   printf("%d is the large number",b);
  else
   printf("%d is the large number",c);
 }
getch();
}
