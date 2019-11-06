/*    CP16_25.C	 */
/* 	Displaying current directory	*/

#include <dir.h>
#include <stdio.h>
#include <string.h>

char *current_directory(char *path)
{
  strcpy(path, "X:\\");  /* fill string with form of response: X:\ */
  path[0] = 'A' + getdisk();  /* replace X with current drive letter */
  getcurdir(0, path+3); /* fill rest of string with current directory*/
  return(path);
}

int main(void)
{
  char curdir[MAXPATH];
  current_directory(curdir);
  printf("The current directory is : %s", curdir);
  return 0;
}
