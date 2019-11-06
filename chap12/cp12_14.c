/*	CP12_14.C	*/
/* Copy Source File Contents to Destinition File*/

#include <stdio.h>
#include<conio.h>
#include<stdlib.h>	// for exit()
void main(int argc, char *argv[])
{

FILE *fpin, *fpout;
char ch;
if((fpin=fopen(argv[1], "r"))==NULL)
 {
 printf("\nError in opening file: %s", argv[1]);
 getch(); 
 exit(0);
 }
else if ((fpout=fopen(argv[2], "w"))==NULL)
 {
 printf("\nError in opening file: %s", argv[2]);
 fclose(fpin);
 getch(); 
 exit(0);
 }
else
 {
  while ((ch = fgetc(fpin)) !=EOF)
  fputc(ch, fpout); // display to monitor

  fclose(fpin);
  fclose(fpout);
  printf("\n\nFile copied successfully");
  }
getch();
}
