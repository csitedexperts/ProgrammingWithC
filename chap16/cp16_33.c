/*    CP16_33.C	 */
/*  Filecopy Example  */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<fcntl.h>
#include<dos.h>
#include<io.h>

#include"c:\TC\Include\Sys\types.h"
#include"c:\TC\Include\Sys\stat.h"

void main()
{
 char source[20], dest[20], buffer[512], *p ;
 int allocate, inhandle, outhandle, bytes, flag ;
 clrscr();
 allocate = 3500;

 p = malloc(allocate ) ;

 if ( p == NULL)
 {
  getch() ;
  return ;
 }

  printf("Enter source file name: ") ;
  gets(source) ;
	/* open source file in low level binary mode for reading  */
  inhandle = open ( source, O_RDONLY | O_BINARY ) ;

     /* if unable to open file */
  if(inhandle<0)
  {
  printf( "Unable to open source file!") ;
  free(p) ;
  return ;
  }

  printf( "Enter destination file name:" ) ;

  gets(dest) ;

  /* create dest file in low level binary mode for writing  */
 outhandle=open(dest,O_CREAT|O_WRONLY | O_BINARY, S_IWRITE);

  /* if unable to create file  */
  if(outhandle<0)
  {
   printf("Unable to create dest file!") ;
  close(inhandle);
  free(p) ;
  return ;
  }

/* read chunks of 512 bytes from source file and write to destination file till there are bytes to read */

  while((bytes = read (inhandle, buffer, 512 ) ) > 0 )
   {
   flag = write ( outhandle, buffer, bytes ) ;
   if ( flag == -1 )
   break ;
   }

   if ( flag == -1 )
   printf( "Unable to copy file!") ;
   else
    printf("File has successfully copied.");

   /* close files and restore original screen contents */
   close(inhandle) ;
   close(outhandle) ;
   free(p) ;
    return ;

getch();
}
