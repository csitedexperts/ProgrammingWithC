/*    CP16_31.C	 */
/* 	Reading data from an existing file  */
#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   union REGS inregs, outregs;
   struct SREGS segregs;
   char buffer[256];
   char *filename;

   printf("Enter a file name to read in : ");
   gets(filename);

  // reading from an existing file

   inregs.h.ah = 0x3F; // open file service
   inregs.x.bx = filename; // get offset address
   inregs.x.cx = sizeof(buffer);  // byte to read
   segread(&segregs);  // get DS value
   inregs.x.dx = (unsigned)buffer;
   intdosx(&inregs, &outregs, &segregs);

   printf("The file %d is opened\n", outregs.x.ax);

  if(outregs.x.cflag)
   printf("ERROR in reading from %s file\n", filename);
  else
  printf("The file %s is ready to read ", filename);

 getch();
}
