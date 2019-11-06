/*    CP16_04.C	 */
/* Using Interrupt 10h 02h service  */
#include <stdio.h>
#include <conio.h>
#include <dos.h>

void movetoxy(int x, int y)
{
 union REGS regs;
 regs.h.ah = 2;  /* sets cursor position */
 regs.h.bh = 0;  /* video page 0 */
 regs.h.dh = y;
 regs.h.dl = x;
 int86(0x10, &regs, &regs);
 }

int main(void)
{
 clrscr();
 movetoxy(20, 2);
 printf("Hello! I am here\n");
 return 0;
}
