/*    CP16_18.C	 */
/* 	Creating a new directory	*/
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main(void)
{
union REGS inregs, outregs;
struct SREGS segregs;

char *dirname ;
printf("Enter a directory name to be created : ");
gets(dirname);

inregs.h.ah = 0x39;
inregs.x.dx = (unsigned) dirname;

segread(&segregs); // get DS value
intdosx(&inregs,&outregs, &segregs);
 
 if(outregs.x.cflag)
   printf("The directory %s is created\n",dirname);
 else
   printf("Unable to create the directory\n");
getch();
}
