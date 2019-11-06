/*    CP16_26.C	 */
/* 	Displaying current directory	*/

#include <stdio.h>
#include <dir.h>
int main(void)
{
   char buffer[MAXPATH];
   getcwd(buffer, MAXPATH);
   printf("The current directory is: %s\n", buffer);
   return 0;
}
