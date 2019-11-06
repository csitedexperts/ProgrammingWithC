/*	CP12_19.C	*/
/* Sample Program using ferror() function */
#include <stdio.h>
#include<conio.h>

int main(void)
{
   FILE *stream;

   /* open a file for writing */
   stream = fopen("C:\\DUMMY.DOC", "w");

   /* force an error condition by attempting to read */
   (void) getc(stream);

   if (ferror(stream))  /* test for an error on the stream */
   {
      /* display an error message */
      printf("Error in reading from DUMMY.FIL\n");

      /* reset the error and EOF indicators */
      clearerr(stream);
   }

   fclose(stream);
   return 0;
}
