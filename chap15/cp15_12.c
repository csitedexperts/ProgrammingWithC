/* CP15_12.C	*/
/* Drawing  a triangular Polygon using drawpoly function */
/*  Please use DOS based TC compiler */

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int polyshape[8] = {30, 50, 130, 150, 30, 150, 30, 50 };
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

  printf("This is a triangular filled polygon :");
  setfillstyle(SOLID_FILL, BLUE);
  fillpoly(4, polyshape); 

  getch();/* clean up */
  closegraph();
  return 0;
 }
