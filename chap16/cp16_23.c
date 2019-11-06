/*    CP16_23.C	 */
/* 	Renaming an existing directory	*/
#include <stdio.h>

int main(void)
{
    char oldname[80], newname[80];

    /* prompt for file to rename and new name */
    printf("Enter a directory to rename: ");
    gets(oldname);
    printf("Enter New name: ");
    gets(newname);

    /* Rename the file */
    if (rename(oldname, newname) == 0)
     printf("\nThe directory %s is renamed to %s", oldname, newname);
    else
       perror("ERROR in renaming");

    return 0;
}
