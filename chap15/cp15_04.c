/*	CP15_04.C	*/
/* Getting Graphics Driver name and Graphics Mode */
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
 int gdriver, gmode, mode, errorcode;
   /* stores the device driver name */

 char *drivername, *modename;
   /* auto detect graphics driver */
 gdriver = DETECT; 

     /* initialize graphics and local variables */
 initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

   /* get name of the device driver in use */
 drivername = getdrivername();
 printf("Driver Name: %s\n", drivername); // display drivername 

 mode = getgraphmode();
 modename = getmodename(mode);

 printf("Mode Name: %s\n", modename); // display modename
 printf("Mode Value : %d", gdriver);  // driver's mode value

 closegraph();   /* clean up */
 return 0;
}
