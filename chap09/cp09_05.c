/*	CP09_05.C	*/
/* Example of Pointer Operation	*/
#include<stdio.h>
#include<conio.h>

void main()
{
char c, *cptr;
int i, x, *xptr;
float y, *yptr;
cptr= &c;
xptr = &x;
yptr = &y;
printf("cptr = %x",cptr);
printf("\t\txptr= %x",xptr);
printf("\t\typtr= %x",yptr);

for(i=1; i<=5; i++)
{
 printf("\ncptr + %d= %x",i, (cptr+i));
 printf("\t\txptr + %d= %x",i, (xptr+i));
 printf("\t\typtr + %d= %x",i, (yptr+i));
 }
}
