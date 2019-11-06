/* CP15_13.C	*/
/* Drawing a triangular Polygon using drawpoly() function */
/*  Please use DOS based TC compiler */

#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

  printf("This is a triangle :");
  line(30,50, 130,150); // Draw line AB
  line(130,150, 30,150); // Draw line BC
  line(30,150, 30,50); // Draw line CA
 
  getch();/* clean up */
  closegraph();
  return 0;
 }
