/* CP15_05.C	*/
/* Drawing a pixel point */
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int gdriver = DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

 printf("This is a pixel point \n");
 putpixel(100, 100, 2); // Drawing a pixel point

getch();
}
