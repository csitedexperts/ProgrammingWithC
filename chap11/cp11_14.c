/* 	CP11_14.C		*/
/*	Using Built-in Structure  */
#include <stdio.h>

struct tm
{
  int   tm_sec;
  int   tm_min;
  int   tm_hour;
  int   tm_mday;
  int   tm_mon;
  int   tm_year;
  int   tm_wday;
  int   tm_yday;
  int   tm_isdst;
};

int main(void)
{
char str[80];
struct tm *time_now;
struct tm secs_now;

tzset();
time(&secs_now);
time_now = localtime(&secs_now);

strftime(str, 80,"It is %I:%M o'clock of %A, %B %d '20%y.",
time_now);

printf("%s\n",str);
return 0;
}
