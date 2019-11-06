/*    CP16_02.C	 */
/* Using Interrupt 21h 02h service  */
#include<stdio.h>
#include<dos.h>
main()
{
 union REGS inregs, outregs;
 char ch;
  for(ch='A'; ch<='Z'; ch++)
   {
    inregs.h.ah=0x2; // service call; 02h to ah register  
    inregs.h.dl=ch;  // ch to dl register
    int86(0x21, &inregs, &outregs);	
  /* interrupt execution (dispaly character)  */
   // printf("%c", outregs.h.dl); // Also dispaly character
   }
}
