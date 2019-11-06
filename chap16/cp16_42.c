/*    CP16_42.C	 */
/* Searching files with interrupt services  */
#include <dos.h>
#include <process.h>
#include <stdio.h>

int main(void)
{
   union REGS inregs, outregs;
   struct SREGS segregs;
   int i =0, j=0, k=0;

   struct FileInfo
   {
   char reserved[21];
   char attribute;
   unsigned time_stamp;
   unsigned date_stamp;
   long filesize;
   char filename[13];
   } far *entry;

   char *fname;

   printf("Enter a file name : ");
   gets(fname);

   inregs.h.ah = 0x4E; // find first file
   inregs.x.cx = 0;
   inregs.x.dx = (unsigned) fname;

   segread(&segregs);  // get DS value
   intdosx(&inregs, &outregs, &segregs);

  if(outregs.x.cflag)
   printf("No maching file \n");
  else
  {

   printf("Listing of %s \n", fname);
   entry = (struct FileInfo far * ) MK_FP (_psp, 0x80);
   do{
   for(i = 0; i<12; i++)
    {
     if (entry ->filename[i])
      {
       putchar(entry->filename[i]);
      
      }
     else
       break ;
     }
    putchar('\n');
    
    j++; k++;

     if(j==20)   // show 20 files at a time
      {
       printf("\nPress any key to continue.....");
       getch();
       j=1;
       clrscr();
      }

    inregs.h.ah = 0x4F; // find next file(s)
    intdos(&inregs, &outregs);
   } while( !outregs.x.cflag); 

  }

printf("\n%d file(s) found", k);
getch();
}
