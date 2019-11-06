/*    CP16_43.C	 */
/*  getdisk() & setdisk() example  */
#include <stdio.h>
#include <dir.h>

int main(void)
{
  int disk, maxdrives;
  disk = getdisk() + 'A';
  maxdrives = setdisk(2);
  printf("Current drive is: %c\n", disk);
  printf("Number of maximum logical drives : %d\n", maxdrives);
 return 0;
}
