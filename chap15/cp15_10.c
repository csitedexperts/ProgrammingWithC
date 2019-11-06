/* CP15_10.C	*/
/* Drawing Lines and Rectangle with various format	*/

#include <graphics.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

/* the names of the line styles supported */
char *lname[] = {
   "SOLID_LINE",
   "DOTTED_LINE",
   "CENTER_LINE",
   "DASHED_LINE",
   "USERBIT_LINE"
   };
int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   int style, midx, midy, userpat;
   char stylestr[40];

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   /* a user defined line pattern */
   /* binary: "0000000000000001"  */
   
    userpat = 1;
   for (style=SOLID_LINE; style<=USERBIT_LINE; style++)
     {
      /* select the line style */
      setlinestyle(style, userpat, 1);

      /* convert style into a string */
      strcpy(stylestr, lname[style]);

      /* draw a line */
      line(0, 0, midx-10, midy);

      /* draw a rectangle */
      rectangle(0, 0, getmaxx(), getmaxy());

      /* output a message */
      outtextxy(midx, midy, stylestr);

      /* wait for a key */
      getch();
      cleardevice();
   }
   closegraph();	/* clean up */
   return 0;
}
