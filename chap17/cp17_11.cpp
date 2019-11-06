/*	CP17_11.CPP	 */
/*    Using new and delete operators	*/
#include<stdio.h>
int main()
 {
 int x, *xptr;
 xptr = new int;  //Alocates 2 byte memory spaces for xptr
 x = 101;
 xptr = &x;
 printf("x= *xptr = %d", *xptr);
 printf("\nxptr = %x", xptr);
 delete xptr;    //Frees the alocated memory spaces of xptr
 printf("\nThe allocated spaces are released.");
 return 0;
}
