/* CP15_14.C	*/
/* Drawing  a using ciecle() function  */
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

  printf("This is a circle :");
  circle(300, 200, 100); // Drawing a circle
  
  getch();/* clean up */
  closegraph();
  return 0;
 }
