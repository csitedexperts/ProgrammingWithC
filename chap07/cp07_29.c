/*	 CP07_29.C  */
/*	 Using Static Variable */
#include<stdio.h>
#include<conio.h>

int series();

int main()
{
int i;
for(i=0; i<10; i++)
 printf("%d  ", series());

getch();
return 0;
}

series()
{
static int number=0;
number = number +10;
return(number);
}
