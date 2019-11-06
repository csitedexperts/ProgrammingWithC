/*    CP16_47.C	 */
/* 	Finding Free disk space  */

#include <stdio.h>
#include <dos.h>

int main(void)
{
   union REGS inregs, outregs;
   long bytepercluster, totalspace, availablespace;

   inregs.h.ah=0x36; // service call
   inregs.h.dl = 0; // default drive

   int86(0x21, &inregs, &outregs);
   bytepercluster = outregs.x.ax * outregs.x.cx;
   totalspace = bytepercluster * outregs.x.dx;
   availablespace =  bytepercluster * outregs.x.bx;

   printf("Total disk space : %ld bytes \n", totalspace);
   printf("Available disk space : %ld bytes \n", availablespace);

   return 0;
}
