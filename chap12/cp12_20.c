/*	CP12_20.C	*/
/* Sample Program using clearerr() function */
#include <stdio.h>
#include<conio.h>

int main()
{
 FILE *fp;
 char ch;

 /* open a file for writing */
 fp = fopen("C:\\mm.doc", "w");

 /* force an error condition by attempting to read */
 ch = fgetc(fp);
 printf("%c\n",ch);

 if (ferror(fp))
  {
   printf("Error in reading from file C:\\mm.doc \n");
      /* display an error message */
   clearerr(fp);
   /* reset the error and EOF indicators */
  }

 fclose(fp);
 return 0;
}
