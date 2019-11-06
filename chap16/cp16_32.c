/*    CP16_32.C	 */
/* 	Writing to an existing file  */

/* writin data */
   inregs.h.ah = 0x40; 
   inregs.x.bx = dest;

   inregs.x.cx = inregs.x.ax;
   inregs.x.dx = (unsigned) buffer; 
   intdosx(&inregs, &outregs, &segregs);
    if(outregs.x.cflag)
    {
     printf("\nERROR in writing to destination file");
     break ;
    }
