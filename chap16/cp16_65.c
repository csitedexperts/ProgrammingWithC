/*    CP16_65.C	 */
/* Cancelling all Print jobs */

#include<stdio.h>
#include<dos.h>

void  main()
{
 union  REGS  inregs ,  outregs ;
 struct  SREGS  segs;
 inregs.x.ax = 0x0103;  // submit file function
 int86x (0x2F, &inregs, &outregs,&segs);

 if (outregs.x.cflag)   //error statues
  printf("ERROR in killing queue status %d", outregs.x.ax);
 else
  printf("Queue contents killed");

}
