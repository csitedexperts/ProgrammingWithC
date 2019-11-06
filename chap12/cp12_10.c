/*	CP12_10.C	*/
/* 	Printing data file using fputc() & fgetc() Functions*/
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
 {
  char Ch ;
  int Count=0;
  FILE *myfile;
  myfile=fopen("C:\\MM", "w+") ;

  printf("\nEnter a line of text and \
  Press ENTER to save:\n");
  while( (Ch =getchar())!='\n')
  {
   fputc(Ch, myfile); // put it on the file
   fflush(myfile);
   Count++;
  }

  fclose(myfile);
  myfile=fopen("C:\\MM", "r") ;

  while ((Ch = fgetc(myfile)) !=EOF)
  fputc(Ch, stdprn); // Sends to Printer 
  
  printf("\nNo. of Characters ");
  printf("(including blank spaces) Printed: %d", Count);

  fclose(myfile);
  getch();
}
