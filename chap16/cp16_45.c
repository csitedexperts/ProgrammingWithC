/*    CP16_45.C	 */
/* To show all useable disk drives. */

#include <stdio.h>
#include <dir.h>

int main(void)
{
   int save, disk, disks;

   /* save original drive */
   save = getdisk();

   /* print number of logic drives */
   disks = setdisk(save);
   printf("%d logical drives on the system\n\n", disks);

   /* print the drive letters available */
   printf("Available drives:\n");
 for (disk = 0;disk < 26;++disk)
   {
      setdisk(disk);
      if (disk == getdisk())
         printf("%c: drive is available\n", disk + 'a');
   }
   setdisk(save);
   getch();
   return 0;
}
