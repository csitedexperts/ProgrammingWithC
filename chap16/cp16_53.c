/*    CP16_53.C	 */
/* 	An Extended Keyboard interfacing example  */

#include<stdio.h>
#include<conio.h>
#include<dos.h>

main()
{
union REGS inregs, outregs;
int oldstate = 0; 
printf("Press any key to continue...\n");

do{

inregs.h.ah=2; // service call
int86(0x16, &inregs, &outregs);

if(oldstate !=outregs.h.al)
{
oldstate = outregs.h.al;

if(outregs.h.al & 1)
  printf("Right Shift Pressed\n");

if(outregs.h.al & 2)
  printf("Left Shift Pressed\n");

if(outregs.h.al & 4)
  printf("Ctrl Key Pressed\n");

if(outregs.h.al & 8)
  printf("Alt Key Pressed\n");
if(outregs.h.al & 16)
  printf("Scroll Lock Pressed\n");

if(outregs.h.al & 32)
  printf("Num Lock Pressed\n");

if(outregs.h.al & 64)
  printf("Caps Lock Pressed\n");

else
  printf("\n");
}

inregs.h.ah = 1;
int86(0x16, &inregs, &outregs);

}while(outregs.x.flags & 64);

 getch();
}
