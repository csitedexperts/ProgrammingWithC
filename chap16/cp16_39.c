/*    CP16_39.C	 */
/* Checking file Attributes  */

#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   char *fname;
   union REGS inregs, outregs;
   struct SREGS segregs;

   printf("Enter a file name : ");
   gets(fname);
   inregs.x.ax = 0x4300; // getting modes 
   inregs.x.dx = fname;
   segread(&segregs);
   int86x(0x21, &inregs, &outregs, &segregs);
   if(outregs.x.cflag)
      printf("ERROR in getting attribute.");
   else
   {

   if(outregs.x.cx & 0)
    printf("The file %s is normal\n", fname);
   if(outregs.x.cx & 1)
    printf("The file %s is read-only\n", fname);
   if(outregs.x.cx & 2)
    printf("The file %s is hidden\n", fname);
   if(outregs.x.cx & 4)
    printf("%s is a system file\n", fname);
   if(outregs.x.cx & 8)
    printf("%s is a volume label\n", fname);
   if(outregs.x.cx & 16)
    printf("%s is a directory\n", fname);
   if(outregs.x.cx & 32)
    printf("The file %s is archive\n", fname);
   }
   return 0;
}
