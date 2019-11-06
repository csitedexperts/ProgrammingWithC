/* CP04_21.C  */
/*	Using scanf() to input String */
#include<stdio.h>

void main()
{
char	*Dept;
printf("Enter Your Department Name:");
scanf("%s", Dept);  // no & is required
printf("You entered :%s", Dept);
}
