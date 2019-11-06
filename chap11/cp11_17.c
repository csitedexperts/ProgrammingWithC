/*		CP11_17.C		*/
/*   Using Built-in Union  */

#include<stdio.h>
#include<conio.h>

union REGS {
  struct BYTEREGS  {
  unsigned char  al, ah, bl, bh;
  unsigned char  cl, ch, dl, dh;
}h; 
struct WORDREGS  {
  unsigned int  ax, bx, cx, dx;
  unsigned int  si, di, cflag, flags;
}x;

};

void main()
{
 union REGS in, out;
 in.h.ah=0x30;
 in.h.al=0;

 int86(0x21, &in, &out);
 printf("\n\nCurrent Dos version is: %d.%d", out.h.al, out.h.ah);
 getch();
 }
