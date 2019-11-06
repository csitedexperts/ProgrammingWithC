/* CP15_16.C	*/
/* Drawing  an arc using arc() function  */
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
 {
  int gdriver = DETECT, gmode, i;
  initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
  printf("This is an arc :");
  for ( i=0; i<=20; i=i+2)
   {
    setcolor(i);
    arc(100, 200, 50, 0, i+50);
    }
  getch();/* clean up */
  closegraph();
  return 0;
}
