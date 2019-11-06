/*		CP11_16.C		*/
/*   Using Built-in Union  */

#include<stdio.h>
#include<conio.h>
#include<dos.h>	// for intdos() Function

void main()
{
 union REGS in, out;
 in.h.ah=0x30;
 in.h.al=0;
 intdos(&in, &out);
 /* Equivqlent to      
   int86(0x21, &in, &out);   // Executes INT 21h with 30h function 
 */
 printf("\n\nCurrent Dos version is: %d.%d", out.h.al, out.h.ah);
 getch();
 }
