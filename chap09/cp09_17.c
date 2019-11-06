/*	CP09_17.C	*/
/*	Example of Pointer to Pointers*/
#include<stdio.h>
#include<conio.h>
int main(){
 int x,*xptr1, **xptr2;
 x = 100;
 xptr1 = &x;
 xptr2 = &xptr1;
 printf("x = %d", x);
 printf("\nxptr1 = %d", *xptr1);
 printf("\nxptr2 = %d", **xptr2);
}
