/*	CP12_03.C	*/
/* 	Writing characters to data file */
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
 {
  char Ch ;
  FILE *myfile;
  myfile=fopen("C:\\MM.txt", "wb+") ;
  printf("A file named C:\\MM.txt is opened,");
  printf("\nEnter a line of text and \
  Press ENTER to save:\n");

  while( (Ch =getchar())!='\n')
  {
   putc(Ch, myfile); // put it on the file
   fflush(myfile);
  }

  fclose(myfile);
 getch();
 }
