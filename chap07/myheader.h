/* C:\Myheader\Myheader.h */
/* Creating a new header file */
#ifndef __STDIO_H
#include <stdio.h>
#endif
#ifndef __CONIO_H
#include <conio.h>
#endif
struct BYTEREGS 	/*  Structure Prototype */
 {
  unsigned char  al, ah, bl, bh;
  unsigned char  cl, ch, dl, dh;
 }; 
struct WORDREGS 	/*  Structure Prototype */
 {
  unsigned int  ax, bx, cx, dx;
  unsigned int  si, di, cflag, flags;
 };
union REGS		/*  Structure Prototype */
 {
  struct BYTEREGS  h;
  struct WORDREGS  x;
 };
void newline(); 	/*  Function Prototype */
/*	End of file   */
