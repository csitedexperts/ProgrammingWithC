/*      CP16_62.C       */
/* File Printing using fputc() function */

#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
 {
  char ch ;
  int i=0;
  FILE *fp;
  char *fname ;

  printf("Enter a file name to print : ");
  gets(fname);
  fp = fopen(fname, "r") ;
 
  while ((ch = fgetc(fp)) !=EOF)
  fputc(ch, stdprn); // Sends to Printer

  printf("\nNo. of Characters ");
  printf("(including blank spaces) Printed: %d", i);
 
  fclose(fp);
  getch();
 }
