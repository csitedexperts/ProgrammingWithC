/* CP15_09.C	*/
/* Drawing a Rectangle Using line() Function	*/
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
  int gdriver = DETECT, gmode;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
  printf("This is a rectingle :");
  line(30,50, 130,50); 	// Draw line AB
  line(130,50, 130,150); // Draw line BC
  line(130,150, 30,150); // Draw line CD
  line(30,150, 30,50); // Draw line DA

 getch();/* clean up */
 closegraph();
 return 0;

}
