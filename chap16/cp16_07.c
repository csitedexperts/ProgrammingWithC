/*    CP16_07.C	 */
/* Programming with 256 VGA Colors  */

#include<stdio.h>
#include<dos.h>
#define SCREEN_WIDTH 320
#define SCREEN_SEGMENT 0xA000

void drawdot(int x, int y, int color);
void drawrectangle(int x1, int y1, int x2, int y2, int color);

void main()
 {
  int n, color = 0, y = 10, x = 0;
  union REGS inregs, outregs;

  inregs.x.ax = 0x0013; // moves 13 to al
  int86(16, &inregs, &outregs);
 printf("Press any key to view more ...");
for(n=1; n<=256; n++)
  {
  drawrectangle(x, y, x+10, y, color);
  color++;
  y = y +10;

if(n%16 == 0)
  {
  x = x+20;
  y = 10;
  getch();
  }
}
  getch();
  inregs.x.ax = 0x0003;  // moves 03 to al 
  int86(16, &inregs, &outregs);
}

void drawdot(int x, int y, int color)
{
  unsigned char far *screenptr;
  screenptr = MK_FP(SCREEN_SEGMENT, y*SCREEN_WIDTH+x);
  *screenptr = color;
}

void drawrectangle(int x1, int y1, int x2, int y2, int color)
  {
  int x;
  for(x=x1; x<=x2; x++)
   {
    drawdot(x, y1+0, color);
    drawdot(x, y1+1, color);
    drawdot(x, y1+2, color);
    drawdot(x, y1+3, color);
    drawdot(x, y1+4, color);
    drawdot(x, y1+5, color);
    drawdot(x, y1+6, color);
   }
}
