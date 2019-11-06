/* CP15_18.C	*/
/* Drawing  a pi-chart */
/*  Please use DOS based TC compiler */

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int main(void)
{
  int gdriver = DETECT, gmode, errorcode;
  int midx, midy;
  int stangle = 45, endangle = 135, radius = 100;
  /* initialize graphics and local variables */
  initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
  midx = getmaxx()/ 2;
  midy = getmaxy()/ 2;
  /* set fill style and draw a pie slice */
  setfillstyle(SOLID_FILL, getmaxcolor());
  pieslice(midx, midy, stangle, endangle, radius);

 closegraph();
 return 0;
}
