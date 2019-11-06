/*	CP16_12.C		*/
/*   Displaying DOS version   */
#include<stdio.h>
#include<conio.h>
#include<dos.h>	// for int86() Function

void main()
{
 union REGS inregs, outregs;
 inregs.h.ah=0x30;
 inregs.h.al=0;
 intdos(&inregs, &outregs);
  /* Equivqlent to    int86(0x21, &inregs, &outregs);   */
 printf("\n\nCurrent Dos version is: %d.%d", outregs.h.al, outregs.h.ah);
 getch();
 }
