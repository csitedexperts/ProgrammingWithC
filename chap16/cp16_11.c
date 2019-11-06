/*    CP16_11.C	 */
/* 	Testing System Configuration 	*/
#include<dos.h>
#include<stdio.h>
#include<conio.h>
main()
{
union REGS inregs,outregs;
int n=0;
int86(0x11,&inregs,&outregs);

if((outregs.x.ax&1)==0)
    printf("\nNo disk drive");
else
    printf("\nDisk drive is present");
if((outregs.x.ax&2)==0)
    printf("\nNo math-coprecessor");
else
    printf("\nMath-coprecessor is present");
if((outregs.x.ax&1)==1)  /* Disk drive is present */
   {
    n=( outregs.x.ax & 0X00C0)>>6;
    printf("\nNumber of disk drive : %d", n+1);
   }
 n=(outregs.x.ax <<4)>>13;
    printf("\nNumber of serial port : %d", n);
 n= outregs.x.ax>>14;
    printf("\nNumber of parallel port : %d", n);
 getch();
}
