/*    CP16_55.C	 */
/* Detecting Mouse & Mouse Driver Version */
#include<stdio.h>
#include<dos.h>
#include<conio.h>

void main(void)
{
union REGS inregs,outregs; 

//Check for mouse driver
inregs.x.ax = 0;
int86(0x33, &inregs, &outregs);

if(outregs.x.ax ==0)
  printf("Mouse not present");
else
{
  printf("Mouse present\n");
  inregs.x.ax = 0x24; 
  int86( 0x33, &inregs, &outregs);
  printf("Mouse driver version  %d.%d \n",outregs.h.bh,outregs.h.bl);

switch(outregs.h.ch)
  {
  case 1: printf("Bus mouse \n");
	break;
  case 2: printf("Serial mouse \n");
	break;
  case 3: printf("Inport mouse \n");
	break;
  case 4: printf("PS/2 mouse \n");
	break;
  case 5: printf("HP mouse \n");
	break;
  }
printf("Mouse IRQ %d \n", outregs.h.cl);
}

}
