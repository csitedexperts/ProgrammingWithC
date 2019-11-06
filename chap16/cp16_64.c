/*    CP16_64.C	 */
/* Removing a file from the printer queue */

#include<stdio.h>
#include<dos.h>

void  main()
  {
  union  REGS  inregs ,  outregs ;
  struct  SREGS  segs;
  
   char *fname;
   printf("Enter a file name to cancel printing : ");
   gets(fname);

   segread (&segs);   // get DS register value
   inregs.x.ax = 0x0102;  // submit file function
   inregs.x.dx = (unsigned)fname; //offset of filename
   int86x (0x2F, &inregs, &outregs,&segs);
  
   if (outregs.x.cflag)   //error statues
   {
   if (outregs.x.ax == 1)
      printf ("Invalid function\n");
   else if (outregs.x.ax == 2)
     printf ("File not found\n");
   else if (outregs.x.ax == 3)
     printf ("Path not found\n");
   else if (outregs.x.ax == 4)
     printf ("Too many open files\n");
   else if (outregs.x.ax == 5)
     printf ("Access denied\n");
   else if  (outregs.x.ax == 8)
     printf ("Queue full\n");
   else if (outregs.x.ax == 12)
     printf ("Invalid access\n");
   else if (outregs.x.ax == 15)
    printf ("Invalid drive\n");
   }

getch();
}
