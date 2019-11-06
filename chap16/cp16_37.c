/*    CP16_37.C	 */
/*  Renaming an existing file   */
#include <stdio.h>

int main(void)
 {
   char oldname[80], newname[80];
   printf("Enter old file name: ");
   gets(oldname);
   printf("Enter new file name: ");
   gets(newname);

   /* Rename the file */
   if (rename(oldname, newname) == 0)
      printf("\nThe file %s is renamed to %s", oldname, newname);
   else
      perror("ERROR in renaming");

   return 0;
}
