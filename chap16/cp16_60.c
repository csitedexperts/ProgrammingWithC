/*    CP16_60.C	 */
/* Printing character using DOS interrupt service */

#include<dos.h>

void main()
 {
  union REGS  inregs ,  outregs ;
  char * string;
  printf("Enter a line to print : ");
  gets(string);
  
  inregs.h.ah = 5;
  while(*string)
  {
  inregs.h.dl = *string++;
  intdos(&inregs, &outregs);
  }
 }
