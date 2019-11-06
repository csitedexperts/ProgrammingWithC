/*	CP15_03.C	*/
/* Auto Detection Graphics Mode */
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    int gdriver, gmode, errorcode;
    gdriver = DETECT ;	/* request auto detection */
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   errorcode = graphresult();	/* read result of initialization */

   if (errorcode != 0)  /* if an error occurred */
   {
     printf("Graphics error: %s\n", grapherrormsg(errorcode));
     printf("Press any key to halt:");
     getch();
     exit(1); /* terminate with an error code */
   }
  else{
   // Program code goes here ... ...
  }
 closegraph();/* clean up */
 return 0;
}
