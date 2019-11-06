/*	CP13_03.C	*/
/*	Use of far Pointer */
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
 char far *fptr;
 unsigned int segval, offval;

 fptr = (char far *) MK_FP(0x1234, 0xfffe);

        /* Initialize far pointer */
 segval = FP_SEG(fptr);
        /* Fetches segment address from far pointerr */
 offval = FP_OFF(fptr);
        /* Fetches offset address from far pointerr */

 printf("Segment part of fptr is : %X \n", segval);
 printf("Segment part of fptr is : %X \n", offval);

getch();
}
