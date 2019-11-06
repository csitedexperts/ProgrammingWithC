/*	 CP13_07.C	*/
/*	Example using malloc() function */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define SIZE  10

int main()
{
char ch=10, *cptr;
int x, *iptr;
void *vptr;
cptr = (char*)malloc(ch);		 // reserves 10 bytes
printf("Value of cptr is : %x", cptr);
x =5;
iptr = (int*)malloc(x*sizeof(int));  // reserves 10 bytes
printf("\nValue of iptr is : %x", iptr);

vptr = malloc(SIZE);			// reserves 10 bytes
printf("\nValue of vptr is : %x", vptr);

getch();
}
