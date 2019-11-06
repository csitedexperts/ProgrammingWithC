/*    CP16_21.C	 */
/* 	Changing Current directory	*/
#include <stdio.h>
#include <stdlib.h>
#include <dir.h>

char old_dir[MAXDIR];
char new_dir[MAXDIR];

int main(void)
{
   if (getcurdir(0, old_dir))
   {
      perror("getcurdir()");
      exit(1);
   }
   printf("Current directory is : \\%s", old_dir);

   if (chdir("\\"))
   {
      perror("chdir()");
      exit(1);
   }

   if (getcurdir(0, new_dir))
   {
      perror("getcurdir()");
      exit(1);
   }
   getch();
   printf("\nNow the current directory is : \\%s", new_dir);

   printf("\nChanging back to original directory : \\%s\n", old_dir);
   if (chdir(old_dir))
   {
      perror("chdir()");
      exit(1);
   }

   return 0;
}
