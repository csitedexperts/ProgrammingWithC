/*	CP12_13.C	*/
/*    Printing Data File*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void main(int argc, char *argv[])
  {
  FILE *fp;
  char fname[40];
  char *ch ="Programming in C";
  
  if ((fp = fopen(argv[1], "r"))==NULL)
   {
   printf("\nError in opening (%s)", argv[1]);
   getch();
   exit(0);
   }
 
  else
   {
    while(fgets(ch, sizeof(ch), fp))
     {
     fgets(ch, sizeof(ch), fp);
     }
     fputs(ch, stdprn);
   }  

 fclose(fp);
}
