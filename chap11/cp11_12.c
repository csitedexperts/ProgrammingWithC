/* 	CP11_12.C		*/
/* 	Derect use of Built-in structure time without it's header file */
#include<stdio.h>

struct time {
  unsigned char  ti_min;   /* minutes */
  unsigned char  ti_hour;  /* hours */
  unsigned char  ti_hund;  /* hundredths of seconds */
  unsigned char  ti_sec;   /* seconds */
};

int main(void)
{
   struct  time t;

   gettime(&t);
   printf("Current time is : %2d:%02d:%02d.%02d\n",
          t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);
   return 0;
}
