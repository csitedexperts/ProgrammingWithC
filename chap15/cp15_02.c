/*	CP15_02.C	*/
/* A Text Mode Program */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
char *msg = "This is in text mode window ";
void main(){
int x, y;
char *p; p = msg;
textmode(4);
for(x=1; x<=strlen(msg); x++)
{
 for( y=1; y<=12; y++)
 {
  gotoxy(x, y);
  printf("%c", *p);
  gotoxy(x, 25-y);
  printf("%c", *p);
  delay(100);
  }
  p++;
 }
 getch();
}
