/*    CP16_36.C	 */
/*  Deleting an existing file   */
#include <stdio.h>
#include <dos.h>

int main()
{
   union REGS inregs, outregs;
   char *filename;

   printf("Enter a file name to delete : ");
   gets(filename);

   /* delete file */
   inregs.h.ah = 0x41;
   inregs.x.dx = (unsigned) filename;
   intdos(&inregs, &outregs);

   if (outregs.x.cflag)
     printf("ERROR in deleting");
   else
      printf("\nThe file %s is deleted", filename);

   return;
}
