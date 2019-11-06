/*    CP16_16.C	 */
/* 	Displaying System time	*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(void)
{
union REGS inregs, outregs;
int hr,min, sec;
inregs.h.ah = 0x2C;

clrscr();
while(!kbhit())
 {
 int86(0x21, &inregs,&outregs);
//intdos(&inregs,&outregs);
 hr = outregs.h.ch;
 min = outregs.h.cl;
 sec = outregs.h.dh;
 gotoxy(0,0);
 printf("It is now : %d hour %d min %d sec", hr, min, sec);
 }
getch();
}
