/*    CP16_38.C	 */
/*  Renaming an existing file   */

#include <stdio.h>
#include <dos.h>

int main()
{
   union REGS inregs, outregs;
   struct SREGS segregs;

   char *oldname, *newname;

   printf("Enter old file name : ");
   gets(oldname);

   printf("Enter new file name : ");
   gets(newname);

   /* renaming file */
   inregs.h.ah = 0x56;
   inregs.x.dx = oldname;
   inregs.x.di = newname;

   segread(&segregs);
   intdosx(&inregs, &outregs, &segregs);
   
   if (outregs.x.cflag)
     printf("ERROR in renaming");
   else
      printf("\nThe file %s is renamed to %s", oldname, newname);

   return;
}
