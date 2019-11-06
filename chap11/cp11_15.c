/* 	CP11_15.C		*/
/* stime example 		*/
#include <stdio.h>
#include <time.h>

int main()
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
