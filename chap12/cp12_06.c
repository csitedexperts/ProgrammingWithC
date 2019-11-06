/*	CP12_06.C	*/
/* 	Example of fputc() & fgetc() Functions */
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
  {
  char Ch ;
  int Count=0;
  FILE *myfile;
  myfile=fopen("C:\\MM.DOC", "wb+") ;

  printf("A file named C:\\MM.DOC is opened,");
  printf("\nEnter a line of text and \
  Press ENTER to save it:\n");

  while( (Ch =getchar())!='\n')
  {
   fputc(Ch, myfile); // put it on the file
   fflush(myfile);
     Count++;
  }

  fclose(myfile);
  myfile=fopen("C:\\MM.DOC", "rb") ;
  printf("\nThe file contains:\n\n ");

  while ((Ch = fgetc(myfile)) !=EOF)
  fputc(Ch, stdout); // display to monitor
   // Equivalent to
   //printf("%c", Ch);
  printf("\nNo. of Characters ");
  printf("(including blank spaces): %d", Count);

  fclose(myfile);
  getch();
 }
