/* 	CP12_11.C	*/
/*    Printing Data File*/
#include<stdio.h>
#include<conio.h>

 void main()
 {
  FILE *fp;
  char fname[40];
  char *ch ="Programming in C";
  
  fp = fopen(fname, "w+");
    fputs(ch, fp);
    fflush(fp);
    fclose(fp);
   fp = fopen(fname, "r+");

   while(fgets(ch, sizeof(ch), fp))
     {
     fgets(ch, sizeof(ch), fp);
     }
     fputs(ch, stdprn); // sends to printer
  fclose(fp);

}
