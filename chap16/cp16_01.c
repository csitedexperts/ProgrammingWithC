/*	CP16_01.C		*/
/*	Using geninterrupt() function */
#include <conio.h>
#include <dos.h>
void writechar(char ch); /* function prototype */
int main(void)
{
  clrscr();
  gotoxy(10,2);
  writechar('*');		/* function call */
  getch();
  return 0;
}

void writechar(char ch)
{
  struct text_info ti;  /* grab current text settings */
  gettextinfo(&ti);     /* interrupt 0x10 sub-function 9 */
  _AH = 9; 			/* character to be output */
  _AL = ch;			/* character to _AL */
  _BH = 0;              /* video page */
  _BL = ti.attribute;   /* video attribute */
  _CX = 1;              /* repetition factor */
  geninterrupt(0x10);   /* outputs the char (interrupt generation)*/
}
