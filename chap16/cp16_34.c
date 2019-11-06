/*    CP16_34.C	 */
/*  Filecopy Example  */

#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   union REGS inregs, outregs;
   struct SREGS segregs;

   char buffer[256];
   char *source, *dest;

   printf("Enter source file name : ");
   gets(source);

   printf("Enter destination file name : ");
   gets(source);

 /* To open the source file  */

   inregs.h.ah = 0x3D; // open file service
   inregs.h.al = 0;

   inregs.x.dx = source; // get offset address

   segread(&segregs);  // get DS value
   intdosx(&inregs, &outregs, &segregs);

  if(outregs.x.cflag)
   printf("\nERROR in opening source file");
  else
  {
   source = outregs.x.ax;

   inregs.h.ah = 0x3C; // create a dest file
   inregs.x.cx = 0;   // default file attributes
  
   inregs.x.dx = dest; // get offset address
   segread(&segregs);  // get DS value
   intdosx(&inregs, &outregs, &segregs);

   if(outregs.x.cflag)
     printf("\nERROR in ceating destination file");
  else
    {
    dest = outregs.x.ax;
    do{
       /* read from source file */
     inregs.h.ah = 0x3F;
     outregs.x.bx = source;
    
     inregs.x.cx = sizeof(buffer);  
     inregs.x.dx = (unsigned)buffer; // get offset address

     segread(&segregs);  // get DS value
     intdosx(&inregs, &outregs, &segregs);

   if(outregs.x.cflag)
    {
    printf("\nERROR in reading from source file");
    break ;
    }
   else if(outregs.x.ax) // not end of file
   {
   /* writin data */
   inregs.h.ah = 0x40; 
   inregs.x.bx = dest;

   inregs.x.cx = outregs.x.ax;
   inregs.x.dx = (unsigned) buffer; 
   intdosx(&inregs, &outregs, &segregs);
    if(outregs.x.cflag)
    {
     printf("\nERROR in writing to destination file");
     break ;
    }

   }

  } while(outregs.x.ax !=0); 

   /* closes opened files */
  
   inregs.h.ah = 0x3E; // close file service
   inregs.x.bx = source;  
   intdos(&inregs, &outregs);  // closes source file

   inregs.x.bx = dest;
   intdos(&inregs, &outregs);  // closes dest file

   }

  }

getch();
}
