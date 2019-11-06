/*	CP13_04.C	*/
/*	Problem in using far Pointer */

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
 int far *fptr;
 unsigned int segval, offval;

 fptr = (int far *) MK_FP(0x1234, 0xfffe);
        /* Initialize far pointer */
 ++fptr;	/* Increments far pointer */
 segval = FP_SEG(fptr);
        /* Fetches segment address from far pointerr */
 offval = FP_OFF(fptr);
        /* Fetches offset address from far pointerr */
 
 printf("After incrementing far pointer ... ...\n");
 printf("Segment part of fptr is : %x \n", segval);
 printf("Segment part of fptr is : %x \n", offval);

 getch();
}
