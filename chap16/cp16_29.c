/*    CP16_29.C	 */
/* 	Creating a new file  */
#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   union REGS inregs, outregs;
   struct SREGS segregs;

   char filename[80];
   printf("Enter a filename to create : ");
   gets(filename);

   inregs.h.ah = 0x5B; // create file service
   inregs.x.cx = 0;   // default file attributes
   segread(&segregs);  // get DS value
   inregs.x.dx = filename; // get offset address
   intdosx(&inregs, &outregs, &segregs);

  if(outregs.x.cflag)
   printf("The file %s exists, ERROR in creating", filename);
  else
  printf("The file %s is created", filename);
getch();
}
