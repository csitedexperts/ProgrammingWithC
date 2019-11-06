/*	 CP10_30.C	*/
/* strset() Function example */
#include <stdio.h>
#include <string.h>

int main()
{
   char string[10] = "123456789";
   char symbol = '*';
   printf("Before using strset() string : %s\n", string);
   strset(string, symbol);
   printf("After  using strset() string : %s\n", string);
   return 0;
}
