/*    CP16_35.C	 */
/*  Deleting an existing file   */
#include <stdio.h>

int main(void)
{
  char file[80];
  printf("File to delete: ");
  gets(file);

   /* delete the file */
  if (remove(file) == 0)
     printf("Removed %s.\n",file);
  else
     perror("remove");

  return 0;
}
