/*    CP16_20.C	 */
/* 	Removing an existing directory	*/

#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(void)
{
union REGS inregs, outregs;
struct SREGS segregs;

char *dirname ;
printf("Enter the directory name to remove : ");
gets(dirname);

inregs.h.ah = 0x3A;
inregs.x.dx = (unsigned) dirname;
segread(&segregs); // get DS value
intdosx(&inregs,&outregs, &segregs);
 
 if(outregs.x.cflag)
  printf("ERROR in removing current directory");
 else
  printf("Successfully removed the %s directory", dirname);
getch();
}
