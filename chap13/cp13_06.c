/*	CP13_06.C	*/
/*	Example using malloc() function */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>	// for malloc() function
#define SIZE  10

int main()
{
void *vptr;
vptr = malloc(SIZE);
printf("Value of vptr is:%x", vptr);
free(vptr);
printf("\nAllocated memory spaces are released.");

getch();
}
