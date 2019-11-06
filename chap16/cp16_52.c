/*    CP16_52.C	 */
/* 	Another Keyboard interfacing example  */

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
union REGS inregs, outregs;
char ch;
printf("Press any key to continue...");

inregs.h.ah=0; // service call
int86(0x16, &inregs, &outregs);

if(outregs.h.al == 0)
 printf("\nExtended key scan code %c \n", outregs.h.ah);
else
 printf("\nKey pressed %c \n", outregs.h.al);
 getch();
}
