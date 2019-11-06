/*    CP16_19.C	 */
/* 	Removing an existing directory	*/
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <dir.h>

int main(void)
{
    int stat;
    char *dirname ;
    printf("Enter the directory name to remove : ");
    gets(dirname);
    system("dir/p");
    stat = rmdir(dirname);  // removes directory

    if (!stat)
      printf("\nThe directory %s is removed", dirname);
    else
    {
       perror("\nUnable to remove directory\n");
       exit(1);
    }

 getch();
 return 0;
}
