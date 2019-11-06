/*    CP07_03.C	*/
/* Using rand() and randomize() library functions */
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int main(void)
{
 int i, n, sum = 0;
 randomize();
 printf("Ten random numbers from 0 to 99\n\n");
  for(i=0; i<10; i++)
   {
    n = rand() % 100;
    printf("%4d", n);
    sum = sum + n;
    }
 printf("\nSum of the random numbers : %d", sum);

 return 0;
}
