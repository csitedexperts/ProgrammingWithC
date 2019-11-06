/*	CP12_04.C	*/
/* 	Reading characters from data file */
#include<stdio.h>
#include<string.h>
#include<conio.h>

void main()
 {
  char Ch ;
  int Count=0;
  FILE *myfile;
  myfile=fopen("C:\\MM.txt ", "rb") ;

  if (!myfile)	// if the file dosen't exist
   perror("Unable to open the file for reading");

 else
  {
   printf("\nThe file C:\\MM.txt contains:\n\n");
 
   while ((Ch = getc(myfile)) !=EOF)
    {
    putc(Ch, stdout); // display to monitor
    // Equivalent to printf("%c", Ch);
    Count++;
    }
  
  printf("\nNo. of Characters ");
  printf("(including blank spaces): %d", Count);
  }

 fclose(myfile);
 getch();
}
