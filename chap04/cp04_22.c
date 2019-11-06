/*	 CP04_22.C	*/
/* Using scanf() with advanced specifier  */
#include<stdio.h>
void main()
{
char   Dept[50];
printf("Enter Your Department Name: \n");
scanf("%[^\n]", Dept);
printf("\nYour department name is : %s", Dept);
}
