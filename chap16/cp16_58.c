/*    CP16_58.C	 */
/* Checkig printer status using BIOS interrupt service */
#include <stdio.h>
#include <conio.h>

int main(void)
{
  union REGS  inregs ,  outregs ;
  int status =0;
  inregs.x.dx = 0; // Lpt1 is printer 0

do{
   inregs.h.ah = 2;
   int86(0x17, &inregs, &outregs) ;
   
   if (outregs.h.ah != status)
    {
	if (status & 0x01)
       printf("Device time out.\n");
   	if (status & 0x08)
       printf("I/O error.\n");

   	if (status & 0x10)
       printf("Selected.\n");
if (status & 0x20)
       printf("Out of paper.\n");
if (status & 0x40)
       printf("Acknowledge.\n");
      if (status & 0x80)
       printf("Not busy.\n");
     printf("\n");
    }
   } while(!kbhit());

 printf("Press any key to exit...\n");
 getch();
 return 0;
}
