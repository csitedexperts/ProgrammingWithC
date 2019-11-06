/*    CP16_57.C	 */
/*  Checking printer status Using biosprint() function   */
#include <stdio.h>
#include <conio.h>
#include <bios.h>

#define STATUS  2    /* printer status command */
#define PORTNUM 0    /* port number for LPT1 */

int main(void)
{
  int status, abyte=0;
  status = biosprint(STATUS, abyte, PORTNUM);
  if (status & 0x01)
     printf("Device time out.\n");
  if (status & 0x08)
     printf("I/O error.\n");
  if (status & 0x10)
     printf("Printer Selected.\n");
  if (status & 0x20)
     printf("Out of paper.\n");
  if (status & 0x40)
     printf("Acknowledge.\n");
  if (status & 0x80)
     printf("Not busy.\n");
  printf("Press any key to continue\n");
  getch();
  return 0;
}
