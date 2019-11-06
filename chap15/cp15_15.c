/* CP15_15.C	*/
/* Drawing  an ellipse using ellipse function */
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

  printf("This is an ellipse :");
  ellipse(200, 100, 0, 360, 80, 40); // Drawing an ellipse

  getch();/* clean up */
  closegraph();
  return 0;
  }
