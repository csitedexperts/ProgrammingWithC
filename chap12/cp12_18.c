/*	CP12_18.C	*/
/* Sample Program using perror() function */
#include <stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
 fp = fopen("c:\\mm.dac", "r");
 if (!fp)
  perror("Unable to open file for reading");
 
 else
  {
  // Other codes go here ... ... 
  }
 return 0;
}
