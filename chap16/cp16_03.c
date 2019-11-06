/*    CP16_03.C	 */
/* Using Interrupt 10h 0h service  */
#include<dos.h>
#include<stdio.h>
#include<conio.h>

int main()
{
 union REGS inregs, outregs ;
 clrscr();

 inregs.h.ah = 0 ;  // service no.
 inregs.h.al = 0x32 ;  // video mode no
 int86(16, &inregs, &outregs) ;  // issue interrupt
 printf("This is in mode 32h");

 getch();
 return 0;

}
