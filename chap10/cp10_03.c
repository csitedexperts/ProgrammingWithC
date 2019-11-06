/* CP10_03.C	*/
/* Finding Size of 'A' and "A"  */
#include <stdio.h>

int main()
{
char x = 'A';
char *y = "A";
printf("\n'A' takes %d byte(s) in memory", sizeof(x));
printf("\n\"A\" takes %d byte(s) in memory", sizeof(y));
getch();
return 0;

}
