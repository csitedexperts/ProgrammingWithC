/*	 CP10_29.C	*/
/* strstr() Function example */
#include <stdio.h>
#include <string.h>

int main()
{
 char *str1 = "Programming in C", *str2 = "ing", *ptr;
 ptr = strstr(str1, str2);
 if(ptr!="")
  printf("'%s' is a part of the string '%s'", str2, str1);
 else
 printf("'%s' is not a part of the string '%s'", str2, str1);

getch();
return 0;
}
