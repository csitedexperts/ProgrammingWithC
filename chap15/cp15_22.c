/* 	CP15_22.C	*/
/* 	Installing New Font File  */ 
/*  	Please use DOS based TC compiler */

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void checkerrors(void);	/* function prototype */

int main(void)
{
   int gdriver = DETECT, gmode;
   int userfont;
   int midx, midy;

   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;

   checkerrors();	/* check for any initialization errors */

   /* install a user defined font file */
   userfont = installuserfont("GOTHI.CHR");

   /* check for any installation errors */
   checkerrors();

   /* select the user font */
   settextstyle(userfont, HORIZ_DIR, 4);

   /* output some text */
   outtextxy(midx, midy, "This is user font !");

   /* clean up */
   getch();
   closegraph();
   return 0;
}

/* check for and report any graphics errors */
void checkerrors(void)
{
   int errorcode;

   /* read result of last graphics operation */
   errorcode = graphresult();

   if (errorcode != grOk)
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1);
   }
 }
