/*    CP16_48.C	 */
/* 	Testing Drive A: 	*/
#include <bios.h>
#include <stdio.h>

int main(void)
{
 int result;
 char buffer[512];

 printf("Please insert a disk on dirve A: \n");
 printf("Checking drive A: \n");

 result = biosdisk(4,0,0,0,0,1,buffer);
 result = result & 0x02;

 (result) ? (printf("Drive A: is Ready\n")) :
            (printf("Drive A: Not Ready\n"));
getch();
return 0;
}
