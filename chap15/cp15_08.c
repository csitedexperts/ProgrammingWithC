/* CP15_08.C	*/
/* Drawing a Rectangle Using rectangle() Function */
/*  Please use DOS based TC compiler */
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
int main()
{
 int gdriver = DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\\TC\\BGI");

 printf("This is a rectingle :");
 rectangle(30, 50, 130, 150); // Drawing a Rectangle

 getch();/* clean up */
 closegraph();
 return 0;

}
