/*    CP16_40.C	 */
/* Setting new attribute to a file    */

#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   char *fname;
   union REGS inregs, outregs;
   struct SREGS segregs;
   int  newmode;
   printf("Enter a file name : ");
   gets(fname);

   printf("Enter the mode you want to set (0 for normal, 1 for read-only, 2 for hidden, 32 for archive) : ");
   scanf("%d", &newmode);

   inregs.x.ax = 0x4301;   // 43 to ah and  01 to al 
   inregs.x.cx = newmode;  // setting new mode
   inregs.x.dx = fname;

   segread(&segregs);
   int86x(0x21, &inregs, &outregs, &segregs);

   if(outregs.x.cflag)
      printf("ERROR in setting new attribute.");
   else
   {
   switch(newmode)
    {
    case 0:
     printf("The file %s is set as normal\n", fname);
     break;
    case 1:
     printf("The file %s is set as read-only\n", fname);
     break;
    case 2:
     printf("The file %s is set as hidden\n", fname);
     break;
     case 32:
     printf("The file %s is set as archive\n", fname);
     break;
    default:
     printf("You have to enter mode as: 0, 1, 2 or 32");

    }
 }
return 0;
}
