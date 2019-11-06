/*	 CP10_24.C	*/
/* strdup() Function Example */
#include <stdio.h>
#include <string.h>
#include <alloc.h>

int main()
 {
   char *string = "abcde";
   char *dup_str;
   dup_str = strdup(string);
   printf("string = %s\n", string);
   printf("dup_str= %s\n", dup_str);

   free(dup_str);
   return 0;
}
