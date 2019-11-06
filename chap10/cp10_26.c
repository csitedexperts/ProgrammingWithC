/*	CP10_26.C	*/
/* strcoll() Function example */
#include <stdio.h>
#include <string.h>

int main()
  {
   char *two = "b";
   char *one = "a";
   int  check;
   check = strcoll(one, two);
   if (check == 0)
      printf("The strings are equal\n");
   if (check <  0)
      printf("%s  < %s\n", one, two);
   if (check >  0)
      printf("%s > %s\n", one, two);
getch();
return 0;
}
