/*    CP04_28.C  */
/*    Using sizeof operator */
#include<stdio.h>
#include<conio.h>
main()
{
int x;
float y = 5.5;

printf("\nSize of x is %d bytes", sizeof(x));
printf("\nSize of y is %d bytes", sizeof(y));
printf("\nSize of 25535 is %d bytes", sizeof(25535));
printf("\nSize of 75535 is %d bytes", sizeof(75535));
getch();
}
