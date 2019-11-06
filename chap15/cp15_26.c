/* 	CP15_26.C	*/
/* Playing National Theme */
/*  	Please use DOS based TC compiler */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int frec[]={
 683, 767, 642, 683, 642, 575, 512, 575, 512, 461, 432,  0,
 432, 461, 512, 512, 575, 512, 461, 512, 575, 642, 575, 512
 };

 int wait[]={
  600, 600,  300,  300, 600, 600, 600,  300,  300, 600, 900, 1000,
  600, 600,  600,  300, 300, 300, 600, 1200,  600, 600, 600, 1200 };

int main()
 {
  int i;
  clrscr();
  gotoxy(1, 1);
  printf("Playing National Theme ... \n");
  printf("Press any key to exit and wait... ...");
  while(!kbhit())	// Untill press any key
  {
   for(i=0; i<24; i++)
     {
      sound(frec[i]);
      delay(wait[i]);
      nosound();
      delay(30);
     }
  }

 return 0;
}
