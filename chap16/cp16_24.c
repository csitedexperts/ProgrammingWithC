/*    CP16_24.C	 */
/* 	Renaming an existing directory	*/
#include <stdio.h>
#include <dos.h>

int main()
{
   union REGS inregs, outregs;
   struct SREGS segregs;

   char *oldname, *newname;

   printf("Enter the old directory name : ");
   gets(oldname);

   printf("Enter the new name : ");
   gets(newname);

   /* renaming file */
   inregs.h.ah = 0x46;
   inregs.x.bx = oldname;
   inregs.x.cx = newname;

   segread(&segregs);
   intdosx(&inregs, &outregs, &segregs);
   
   if (outregs.x.cflag)
     printf("ERROR in renaming");
   else
      printf("\nThe deiectory %s is renamed to %s", oldname, newname);

   return;
}
