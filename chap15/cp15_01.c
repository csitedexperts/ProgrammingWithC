/*	CP15_01.C	*/
/* Using window(), cprintf(),textybackground() and textcolor() functions  */
#include<stdio.h>
#include <conio.h>
int main(void)
{
 clrscr();
 textmode(64);
 window(10,10,40,15);
 textcolor(BLUE);
 textbackground(WHITE);
 cprintf("This is a test\r\n");
return 0;
}
