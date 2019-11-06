/*    CP16_46.C	 */
/* 	Finding Free disk space  */
#include <stdio.h>
#include <stdlib.h>

#include <dir.h>
#include <dos.h>

int main(void)
{
   struct dfree free;
   long avail;
   int drive;
   drive = getdisk();
   getdfree(drive+1, &free);
   if (free.df_sclus == 0xFFFF)
   {
    printf("Error in getdfree() call\n");
    exit(1);
   }
   avail =(long)free.df_avail *(long)free.df_bsec*(long)free.df_sclus;
   printf("Drive %c: has %ld bytes available\n", 'A' + drive, avail);
   return 0;
}
