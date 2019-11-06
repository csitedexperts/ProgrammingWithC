/*	 CP07_38.C		*/
/*	Example of Command line arguments and command line vectors*/
#include <stdio.h>
#include<conio.h>	

void main(int argc, char *argv[])
{
int i ;
printf("\nargc = %d", argc);
for (i= 0; i<argc; i++)
 printf("\nargv[%d] = %s", argv[i]);
getch();
}
