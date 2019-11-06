/* CP15_07.C	*/
/* Drawing a Line Using putpixel function drawLine()	*/
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int gdriver = DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
 printf("Line between the points A(20, 50) and B(175, 50) is:");

 line(20, 50, 175, 50);

 getch();/* clean up */
 closegraph();
 return 0;
}
