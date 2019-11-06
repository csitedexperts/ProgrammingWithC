/*    CP16_27.C	 */
/* 	Displaying current directory	*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(void)
{
union REGS inregs, outregs;
struct SREGS segregs;
char dir[100];

inregs.h.ah = 0x47;
inregs.x.si = (unsigned) dir;
inregs.h.dl = 0;  // current drive
segread(&segregs); // get DS value
intdosx(&inregs,&outregs, &segregs);
 gotoxy(0,0);
 
 if(outregs.x.cflag)
  printf("ERROR in getting current directory");
 else
  printf("Current directory is : \\%s", dir);
getch();
}
