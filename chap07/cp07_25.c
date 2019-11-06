/* 	CP07_25.C	*/
/* Using both local and global variables with same name*/
#include<stdio.h>
#include<conio.h>
int x = 50;      	// Global Declaration
int main()
{
      
printf("\nNow x = %d", x);
int x = 15;   // Local Declaration
printf("\nAgain x = %d", x);
getch();
return 0;
}
