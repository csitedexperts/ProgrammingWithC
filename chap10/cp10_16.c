/* 	CP10_16.C	*/
/* getche() example */
#include <stdio.h>
#include <conio.h>

int main()
{
  char ch = 0;
  printf("Input a string:");

  while ((ch != '\r'))
  {
    ch = getche();
  }
  return 0;
}
