/*    CP16_15.C	 */
/* 	Displaying System time	*/
#include<stdio.h>
#include<dos.h>

int main(void)
{
struct time t;
int hr, min, sec;
while(!kbhit())
 {
  gettime(&t);
  gotoxy(0,0);
  hr = t.ti_hour;
  min = t.ti_min;
  sec = t.ti_sec;
  printf("It is now : %d hour %d min %d sec", hr, min, sec);
 }
getch();
}
