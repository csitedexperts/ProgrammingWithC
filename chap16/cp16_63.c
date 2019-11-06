/*    CP16_63.C	 */
/* Submitting a file to the printer queue */

#include<stdio.h>
#include<dos.h>

void  main()
 {
  union  REGS  inregs ,  outregs ;
  struct  SREGS  segs;
  
  struct submit_packet
    {
     char  level;    // always 0
     char  *offset;  // offset address of filename
     char  *segment; // segment address of filename
  } packet;

   char *fname;
   printf("Enter a file name to print : ");
   gets(fname);

   packet.level = 0;  //always 0
   segread (&segs);   // get DS register value

   packet.segment = (char *) segs.ds;
   packet.offset = fname;  //offset of filename
   inregs.x.ax = 0x0101;  // submit file function
   inregs.x.dx = (unsigned) &(packet);  // offset of funtion
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
