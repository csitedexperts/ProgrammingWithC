/* CP07_59.C	*/
/*	Use of volatile modifier */
#include <time.h>
#include <stdio.h>
#include <dos.h>

int main(void)
{
   volatile  int start, end;
   start = clock();
   printf("Press any key to continue...");
   getch();
   end = clock();
   printf("\nElapsed time is : %f\n sec.", (end - start) / CLK_TCK);
   getch();
   return 0;
}
