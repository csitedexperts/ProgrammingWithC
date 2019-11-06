/* CP10_12.C  */
/*	 String Operation Using gets() & puts() Functions   */
#include<stdio.h>
int main()
{
char   *Dept;
printf("Enter Your Department Name: ");
gets(Dept);
puts(Dept);
getch();
return 0;
}
