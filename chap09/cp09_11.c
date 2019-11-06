/*	 CP09_11.C		*/
/*	Example of Call by Reference Method*/

#include<stdio.h>
void Swap(int *, int *); //Function Prototype
int main()
{
int x, y;
x=100, y=200;
printf("Before Calling Swap()");
printf("\nInside main() x = %d \ty = %d", x, y);
Swap(&x, &y);
printf("\nAfter Calling Swap()");
printf("\nInside main() x = %d \ty = %d", x, y);
}
void Swap(int *a, int *b)
{
int temp =*a;
*a = *b;
*b = temp;
}
