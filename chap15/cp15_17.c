/* CP15_17.C	*/
/* Drawing  Bar Chart */
/*  Please use DOS based TC compiler */

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy, i;
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");
   printf("Press any key to view other styles...");

   /* loop through the fill patterns */
   for (i=EMPTY_FILL; i<USER_FILL; i++)
    {
    setfillstyle(i, getmaxcolor());/* set the fill style */
bar3d(200, 300, 100, 80, 50, 40); /* draw the 3-d bar */
    getch();
    }

   /* clean up */
   closegraph();
   return 0;
}
