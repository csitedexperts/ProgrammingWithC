/*    CP16_44.C	 */
/*  Finding Current disk and max. disk */

#include <stdio.h>
#include <dos.h>

int main(void)
{
  union REGS inregs, outregs;
  int disk, maxdrives;

  inregs.h.ah = 0x19;
  int86(0x21, &inregs, &outregs);

  disk = 'A' + outregs.h.al;
  printf("Current drive is: %c\n", disk);

  inregs.h.ah = 0x0E;
  inregs.h.dl = 0;  // drive A
  int86(0x21, &inregs, &outregs);

  maxdrives = outregs.h.al;
  printf("Number of maximum logical drives : %d\n", maxdrives);
 return 0;
}
