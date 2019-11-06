/*	 CP10_23.C	*/
/* strcpy() Function Example */
#include <stdio.h>
#include <string.h>
int main() 
{
   char *str1 = "abcdefghi";
   char str2[20];
   printf("str1= %s\n", str1);
   strcpy(str2, str1);
   printf("str2= %s\n", str2);
 getch();
 return 0;
}
