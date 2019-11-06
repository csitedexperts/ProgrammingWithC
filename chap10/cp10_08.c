/* CP10_08.C	*/
/* Array of String Variable */
#include <stdio.h>
#include <string.h>
void main()
{
 char *Name[5]={"Masud","Monira","Momirul","Rima","Ritu"};
 int i;  

 for(i = 0; i<5; i++)
  {
  printf("\nName[%d]: %s", i, Name[i]);
  }
}
