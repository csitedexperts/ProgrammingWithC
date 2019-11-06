/*    CP07_06.C	*/
/*	Using time(), ctime() and stime() library functions */
#include <stdio.h>
#include <time.h>

int main(void)
{
  time_t t;
  t = time(NULL);
  printf("It was now : %s", ctime(&t));
  t = t + 24L*60L*60L;  
/* Back up to same time previous day */

  stime(&t);
  printf("\nAfter adding 24 hours\n");
  printf("\nNew setting is : %s", ctime(&t));
   return 0;
}
