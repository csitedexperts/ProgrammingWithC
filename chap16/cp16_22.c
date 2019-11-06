/*    CP16_22.C	 */
/* 	Changing Current directory	*/

#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dos.h>

#define CF 1  /* Carry flag */

int main(void)
{
   char directory[80];
   struct REGPACK reg;
  
   getcwd(directory, 100);
   printf("Current directory is : %s\n", directory);
  
   printf("Enter the directory name to change to : ");
   gets(directory);
   reg.r_ax = 0x3B << 8;         /* shift 3Bh into  AH */
   
   reg.r_dx = FP_OFF(directory);
   reg.r_ds = FP_SEG(directory);
   intr(0x21, &reg);
   if (reg.r_flags & CF)
      printf("Directory change failed\n");
   getcwd(directory, 80);
    printf("\nNow the current directory is : %s\n", directory);
  return 0;
}
