/*    CP16_09.C	 */
/* Reading Memory Size  */
#include<stdio.h>
#include<dos.h>

main()
{
union REGS inregs,outregs;
/* This service has no input */
int86(0x12,&inregs,&outregs);
printf("Base Memory Size : %d KB", outregs.x.ax);
return 0;
}
