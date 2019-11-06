/* 	CP15_29.C	*/
/* 	Playing Romjaner oie rojer shesa elo khushir eid... ... */
/*  	Please use DOS based TC compiler */

#include<conio.h>
#include<dos.h>
#include<stdio.h>

void eid(int freq,int duration)
{
 sound(freq);
 delay(duration);
}

void off(int duration)
{
 nosound();
 delay(duration);
}

int main()
{
 int i;
 gotoxy(1, 1);
 printf("Playing ... ...\nPress any key to exit and wait... ...");

 for(i=0;i<=2;i++)
 {
  eid(864,260); eid(767,260);
  eid(723,260); eid(864,450);
  off(220);     eid(864,140);
  off(220);     eid(864,250);
  off(230);     eid(864,220);
  eid(864,240); eid(723,240);
  off(225);     eid(723,260);
  eid(614,270); eid(723,270);
  eid(614,250); eid(723,300);
  off(200);     eid(723,250);
  eid(864,220); off(100);
  eid(864,220); off(100);
  eid(723,250); eid(864,250);
  eid(964,300); off(100);
  eid(964,530); eid(864,1000);
  off(300);
 }
nosound();

while(!kbhit())	// Untill press any key 
 main();

}
