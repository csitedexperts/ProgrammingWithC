/* 	CP11_11.C	*/
/*	Using Built-in structure time defined in dos.h file */

#include   <stdio.h>
#include   <dos.h>

int main(void)
{
 struct  time t;

 gettime(&t);
 printf("Current time is : %2d:%02d:%02d.%02d\n",
          t.ti_hour, t.ti_min, t.ti_sec, t.ti_hund);
 return 0;
}
