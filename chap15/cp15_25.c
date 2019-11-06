/* 	CP15_25.C	*/
/* 	Displaying Animated Image   */
/*  	Please use DOS based TC compiler */

#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
 void U();
 void N();
 void I();
 void C();

int main(void)
{
  /* request auto detection */
  int gd= DETECT, gm;
  int i;
  initgraph(&gd,&gm,"c:\\tc\\bgi");
  U();   delay(10);
  N();   delay(10);
  I();   delay(10);
  C();   delay(10);

  printf("Press any key to exit ");
  getch();
  closegraph();
  return 0;
}

void U()
{
 int i;
 for(i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(80,200+i,12);
  floodfill(80,200+i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(80,200+i,12);
 floodfill(80,200+i,4);
 }

 for( i=0;i<100;i++)
 {
 setcolor(2);
 setfillstyle(1,2);
 circle(80+i,300,12);
 floodfill(80+i,300,2);
 delay(5);
 setcolor(4);
 setfillstyle(1,4);
 circle(80+i,300,12);
 floodfill(80+i,300,4);
 }

 for( i=0;i<100;i++)
  {
  setcolor(2);
  setfillstyle(1,2);
  circle(160,300-i,12);
  floodfill(160,300-i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(160,300-i,12);
  floodfill(160,300-i,4);
  }      // end of U

}

void N()
{
 int i;
 for(i=0;i<100;i++)
  {
  setcolor(2);
  setfillstyle(1,2);
  circle(200,300-i,12);
  floodfill(200,300-i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(200,300-i,12);
  floodfill(200,300-i,4);
  }

 for( i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(200+i,200+i,12);
  floodfill(200+i,200+i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(200+i,200+i,12);
  floodfill(200+i,200+i,4);
  }

 for( i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(295,295-i,12);
  floodfill(295,295-i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(295,295-i,12);
  floodfill(295,295-i,4);
 }     // end of N

}

void I()
{
int  i;
 for( i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(350,295-i,12);
  floodfill(350,295-i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(350,295-i,12);
  floodfill(350,295-i,4);
 } 	// end of I


}

void C()
{
int i;
 for( i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(460-i,200,12);
  floodfill(460-i,200,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(460-i,200,12);
  floodfill(460-i,200,4);
  }
 delay(10);

 for( i=0;i<100;i++)
  {
  setcolor(2);
  setfillstyle(1,2);
  circle(400,200+i,12);
  floodfill(400,200+i,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(400,200+i,12);
  floodfill(400,200+i,4);
 }
 delay(10);

 for( i=0;i<100;i++)
 {
  setcolor(2);
  setfillstyle(1,2);
  circle(400+i,295,12);
  floodfill(400+i,295,2);
  delay(5);
  setcolor(4);
  setfillstyle(1,4);
  circle(400+i,295,12);
  floodfill(400+i,295,4);
 }

}
