/*	CP13_05.C	*/
/*	Use of huge Pointer */
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
 int huge *hptr;
 unsigned int segval, offval;
 hptr = (int huge *) MK_FP(0x1234, 0xfffe);
	/* Initialize far pointer */
 ++hptr;	/* Increments far pointer */
 segval = FP_SEG(hptr);
        /* Fetches segment address from far pointerr */
 offval = FP_OFF(hptr);
        /* Fetches offset address from far pointerr */
 
 printf("After incrementing huge pointer ... ...\n");
 printf("Segment part of hptr is : %x \n", segval);
 printf("Segment part of hptr is : %x \n", offval);

 getch();
}
