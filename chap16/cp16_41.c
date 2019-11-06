/*    CP16_41.C	 */
/* Searching files with findfirst() and findnext() functions  */

#include <stdio.h>
#include <dir.h>

int main(void)
{
   struct ffblk ffb;
   int done;
   char *fname;
   int i=0, j=0;
   printf("Enter file name or criteria : ");
   gets(fname);

   printf("Listing of %s \n", fname);
   done = findfirst(fname,&ffb,0);
   while (!done) 
   {
    printf("  %s\n", ffb.ff_name);
    done = findnext(&ffb);
    i++; j++;
  if(j==20)   // show 20 files at a time
    {
    printf("Press any key to continue.....");
    getch();
    j=1;
    clrscr();
    }

   }
  printf("\n%d file(s) found", i);
 return 0;
}
