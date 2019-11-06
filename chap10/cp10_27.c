/*	 CP10_27.C	*/
/* strcat() Function Example */
#include <string.h>
#include <stdio.h>

int main()
  {
   char destination[45];
   char *blank = " "; 
   char *ch1 = "Programming";
   char *ch2 = "in C";

   strcpy(destination, ch1);
   strcat(destination, blank);
   strcat(destination, ch2);

   printf("%s\n", destination);
 getch();
 return 0;
}
