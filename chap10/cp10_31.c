/*	 CP10_31.C	*/
/* atoi & atof Example */
#include <stdlib.h>
#include <stdio.h>

int main()
{
  char *str = "12345.67xyz";
  int i;
  float f;
  i = atoi(str);;
  f = atof(str);
  printf("String = %s", str);
  printf("\nInt  = %d", i);
  printf("\nFloat= %f", f);
  return 0;
}
