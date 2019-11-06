/*	 CP10_25.C	*/
/* strcmp() Function  Example */
#include <string.h>
#include <stdio.h>

int main()
  {
   char *str1 = "abc", *str2 = "bc", *str3 = "c";
   int ptr;
   ptr = strcmp(str2, str1);

   if (ptr > 0)
      printf("\"%s\" is greater than \"%s\"", str2, str1);
   else
      printf("\n\"%s\" is less than \"%s\"", str2, str1);
   ptr = strcmp(str2, str3);

   if (ptr > 0)
       printf("\n\"%s\" is greater than \"%s\"", str2, str3);
   else
       printf("\n\"%s\" is less than \"%s\"", str2, str3);
   return 0;
}
