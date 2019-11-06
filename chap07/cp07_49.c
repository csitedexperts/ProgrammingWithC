/*	CP07_49.C	*/
/*	Example of Recursion */
#include<stdio.h>
#include <conio.h>

main()
{
 printf("\nPress any key to exit");
 while (!kbhit())
 {
 main();
 }
return 0;
}
