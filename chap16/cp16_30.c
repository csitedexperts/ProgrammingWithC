/*    CP16_30.C	 */
/* 	Opening and closing an existing file  */

#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   union REGS inregs, outregs;
   struct SREGS segregs;

   char filename[80];
   printf("Enter a filename to open : ");
   gets(filename);

 // To open the existing file

   inregs.h.ah = 0x3D; // open file service
   inregs.h.al = 0;   // Read-only access
   segread(&segregs);  // get DS value

   inregs.x.dx = filename; // get offset address
   intdosx(&inregs, &outregs, &segregs);

  if(outregs.x.cflag)
   printf("ERROR in opening file");
  else
  printf("The file %s is opened", filename);


 // To close the opened file

 printf("\nPress any key to close the file");
 getch();
 inregs.h.ah = 0x3E; // close file service
 inregs.x.bx = filename;   // file handled
 intdosx(&inregs, &outregs, &segregs);

 if(outregs.x.cflag)
  printf("\nERROR in closing file");
  else
  printf("\nThe file %s is closed", filename);

getch();
}
