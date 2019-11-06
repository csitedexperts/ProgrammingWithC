/*    CP16_61.C	 */
/* Printing characters */

#include<dos.h>

void  main()
  {
  union  REGS  inregs ,  outregs ;
  char * string;
  printf("Enter a line to print ");
  gets(string);

  inregs.x.dx = 0 ;  //  Lpt1 is printer  0

  while  (*string)
  {
   inregs.h.ah = 0; // Service No.
   inregs.h.al = *string++;	// Prints 
   int86(0x17, &inregs, &outregs) ;

   if(outregs.h.ah & 8)	// If an error occure 
    {
     printf(" Printer error-status %d", outregs.h.ah);
    break;
    }
  }
}
