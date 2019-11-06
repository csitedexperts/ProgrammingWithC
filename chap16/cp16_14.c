/*    CP16_14.C	 */
/* 	Displaying System date 	*/
#include<stdio.h>
#include<dos.h>
main()
{
 union REGS inregs, outregs;
 int day, month, year;
 inregs.h.ah = 0x2A;
 int86(0x21, &inregs,&outregs);
 //intdos(&inregs,&outregs);
 day = outregs.h.dl;
 month = outregs.h.dh;
 year = outregs.x.cx;
 printf("Today is : %d/%d/%d", day, month, year);
}
