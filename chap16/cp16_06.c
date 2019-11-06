/*    CP16_06.C	 */
/* Rectangles in All Possible Colors  */

#include<dos.h>

void setmode(int);
void setpaletteregs();
void setdacregs();
void writedot(int, int, int);
void drawrectangles();
void changedacregs();

int main()
 {
 setmode(18);
 setpaletteregs();
 setdacregs();
 drawrectangles();
 changedacregs();
return ;
 }

void setmode(int m)
 {
 union REGS inregs, outregs;
 inregs.h.ah = 0;   /* service number*/
 inregs.h.al = m;   /* mode number*/
 int86(16, &inregs, &outregs);
gotoxy(1, 10);
printf("\Press Ctrl+Break to exit ");
 }

void setpaletteregs()
 {
 char arr[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
 union REGS inregs, outregs;
 struct SREGS segregs;

 inregs.h.ah = 0x10;   /* service number */
 inregs.h.al = 0x02;   /* subfunction set multiple palette registers */

 segregs.es = FP_SEG(arr);
 inregs.x.dx = FP_OFF(arr);

 int86x(16, &inregs, &outregs, &segregs);
 }

void setdacregs()
 {
 union REGS inregs, outregs;
 int j;

for(j=1; j<=15; j++)
  {
  inregs.h.ah = 0x10;   /* service number */
  inregs.h.al = 0x10;   /* subfunction set DAC register */
  inregs.x.bx = j;      /* register number to set (0-63) */
  inregs.h.ch = 0;      /* green value (0-63) */
  inregs.h.cl = 0;      /* blue value (0-63) */
  inregs.h.dh = j*4;    /* red value (0-63) */

  int86(16, &inregs, &outregs);
  }

 }

void writedot(int x, int y, int paletteregno)
{
 union REGS inregs, outregs;
 int j;
  inregs.h.ah = 12;             /* service number */
  inregs.h.al = paletteregno;   /* color value */
  inregs.h.bh = 0;              /* page number */
  inregs.x.cx = x;              /* x coordinate */
  inregs.x.dx = y;              /* y coordinate */
  int86(16, &inregs, &outregs);
  }

void drawrectangles()
 {
 int r, x, y;
for(r=0; r<=15; r++)
  {
   for(x=r*40; x<=(r+1)*40-2; x++)
     {
     for(y=10; y<=50; y++)
      writedot(x, y, r);
     }
  }
 }

void changedacregs()
{
 int r,g, b, regno;
 union REGS inregs, outregs;
for(g=0; g<=63; g=g+4)
  {
      for(b=0; b<=63; b=b+4)
   {
   for(r=0, regno=1; r<=63; r=r+4, regno++)
     {
      inregs.h.ah = 0x10;   /* service number */
      inregs.h.al = 0x10;   /* subfunction set DAC register */
      inregs.x.bx = regno;  /* register number to set (0-63) */
      inregs.h.ch = g;      /* green value (0-63) */
      inregs.h.cl = b;      /* blue value (0-63) */
      inregs.h.dh = r;      /* red value (0-63) */

      int86(16, &inregs, &outregs);
     }
   }
  }

}
