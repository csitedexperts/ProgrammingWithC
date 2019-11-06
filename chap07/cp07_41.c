/*	CP07_41.C	*/
/*	Example of Constant & String Directives*/
#include <stdio.h>
#include<conio.h>	
#define	Max	3
#define    ProgC  "Programming in C"
int main()
{
int i;
for (i= 1; i<=Max; i++)
 printf("%s\n", ProgC);
getch();
return 0;
}
