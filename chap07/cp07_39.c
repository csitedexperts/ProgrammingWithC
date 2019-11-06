/*	CP07_39.C	*/
/*	Command line argumented Function */
#include <stdio.h>
#include<conio.h>	

int main(int argc, char *argv[])
{
int i;

for (i= 0; i<atoi(argv[1]); i++)
 printf("\nProgramming in C");

getch();
return 0;
}
