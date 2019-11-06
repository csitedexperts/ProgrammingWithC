/* 	CP10_15.C	*/
/* putch() example */
#include <stdio.h>
#include <conio.h>
int main(void)
{
  char ch = 0;
  printf("Input a string:");
  while ((ch != '\r'))
  {
    ch = getch();
    putch(ch);
  }
  return 0;
}
