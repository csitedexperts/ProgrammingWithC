/*    CP16_50.C	 */
/* 	Keyboard interfacing example	*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>
main()
{
 union REGS inregs, outregs;
 struct SREGS segregs;
 char ch;
 inregs.h.ah = 0x1;
 inregs.x.cx = 1;
 printf("Type a character : ");
 intdosx(&inregs, &outregs, &segregs);
 if(outregs.x.cflag)
  printf("\nERROR in reading ");
 else
  {
   inregs.h.ah=0x2; // service call
   printf("\nCharacter Typed : %c", outregs.h.al);  // display Ch
  }
 getch();
}
