/*    CP16_13.C	 */
/* 	Displaying System date	*/
#include <dos.h>
#include <stdio.h>

int main(void)
{
 struct date d;
 int day, month, year;
 getdate(&d);
 day   = d.da_day;
 month = d.da_mon;
 year  = d.da_year;
 printf("Today is : %d/%d/%d", day, month, year);
 return 0;
}
