/*	CP07_44.C	*/
/*	Using Conditional Compilation Directives */
#ifndef __STDIO_H
#include <stdio.h>
#endif
#ifndef __CONIO_H
#include <conio.h>
#endif
void main()
{
printf("Press any key to exit ...");
getch();
}
