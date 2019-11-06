/*   CP07_30.C   */
/* main function  that uses functions with global static variable  */

#include <stdio.h>
#include <c:\series.c>  /*  Includes series.c  files */

int main()
{
int i, start_with;

printf("Enter the starting point : ");
scanf("%d", &start_with);
series_start(start_with);

for(i=0; i<10; i++)
 printf("%d  ", series());

return 0;
}
