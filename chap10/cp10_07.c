/* CP10_07.C	*/
/* String Array Example */
#include <stdio.h>
#include <string.h>
int main()
  {
    char *Name[5];
    int i, j;

   for(i = 0; i<3; i++)
    {
    printf("Enter Name[%d]: ", i );
    scanf("%s", Name[i]);
    }
    for(j = 0; j<3; j++)
     printf("\nName[%d]: %s", j, Name[j]);

 getch();
 return 0;
}
