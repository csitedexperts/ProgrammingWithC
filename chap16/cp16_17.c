/*    CP16_17.C	 */
/* 	Creating a new directory	*/
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dir.h>

int main(void)
{
    int stat;
    char *dirname ;
    printf("Enter a directory name to be created : ");
    gets(dirname);
    stat = mkdir(dirname); // creates directory
    if (!stat)
	   printf("The directory %s is created\n",dirname);
    else
    {
       printf("Unable to create the directory\n");
       exit(1);
    }

    getch();
    system("dir/p");
    getch();
  return 0;
}
