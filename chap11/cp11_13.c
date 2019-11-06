/* 	CP11_13.C		*/
/*	Using Built-in Structure  */
#include <stdio.h>
#include <time.h>
#include <dos.h>

int main(void)
{
char str[80];
struct tm *time_now;
time_t secs_now;
/* time_t is a built-in variable of tm structure defined in time.h file */  

tzset();
time(&secs_now);
time_now = localtime(&secs_now);

strftime(str, 80,"It is %I:%M o'clock of %A, %B %d '20%y.",
time_now);

printf("%s\n",str);
return 0;
}
