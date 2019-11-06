/*    CP16_08.C	 */
/* 	Memoruy searching  */
#include <stdio.h>
#include <bios.h>

int main(void)
{
   int memory_size;
   memory_size = biosmemory();  /* returns value up to 640K */
   printf("Base Memory Size : %d KB\n",memory_size);
   return 0;
}
