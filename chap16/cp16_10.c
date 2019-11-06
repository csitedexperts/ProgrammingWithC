/*    CP16_10.C	 */
/* 	Testing System Configuration 	*/
#include <bios.h>
#include <stdio.h>

#define CO_PROCESSOR_MASK 0x0002

int main(void)
{
   int equip_check;

   /* get the current equipment configuration */
   equip_check = biosequip();

   /* check to see if there is a coprocessor installed */
   if (equip_check & CO_PROCESSOR_MASK)
      printf("There is a math coprocessor installed.\n");
   else
      printf("No math coprocessor installed.\n");
   return 0;
}
