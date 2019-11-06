/* CP09_16.C	*/
/* Example of Array of Pointers */
#include <stdio.h>
#include <string.h>

void main()
{
 char *Menu[5]={"File","Edit","Search","Window","Help"};
 int i;
 for(i = 0; i<5; i++)
  {
  printf("%s", Menu[i]);
  printf("\t");
  }
}
