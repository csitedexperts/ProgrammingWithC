/* 	CP10_14.C		*/
/* getch() example */
#include <stdio.h>
#include <conio.h>
int main(void)
{
  char ch = 0;
  printf("Input a string:");

  while ((ch != '\r'))  //Line Feed
  {
    ch = getch();
  }
  return 0;
}
