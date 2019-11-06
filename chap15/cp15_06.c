/* CP15_06.C	*/
/* Drawing a Line Using putpixel function drawLine()	*/
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int x;
 int gdriver = DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");
 printf("Line between the points A(20, 50) and B(175, 50) is:");

  for( x = 0; x<=175; x= x+1)
    {
    putpixel(20+x, 50, 2);
    }
getch();/* clean up */
 closegraph();
 return 0;
}
