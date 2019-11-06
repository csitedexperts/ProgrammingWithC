/*    CP07_09.C	 */
/* 	Creating user-defined function with low-level format	*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>
newline()
{
 union REGS inregs, outregs;
 inregs.h.ah=0x2;
 inregs.h.dl=0xA;
 int86(0x21, &inregs, &outregs);
 printf("%c", inregs.h.dl);
 }

void main()
{
 printf("This is a line ");
 newline();
 printf("This is another line ");
 getch();
 }
