/*  CP10_09.C  */
/*  Array of String, Please use TC-DOS Compiler  */
/*  Please use TC-DOS Compiler  */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
char *command[] = { "DIR", "CHKDSK", "DATE", "TIME"};
char ch;

for(;;)  // infinite loop
{
do
{
printf("1: Directory \n");
printf("2: Check Disk\n");
printf("3: Set Date  \n");
printf("4: Set Time  \n");
printf("5: Exit      \n");

printf("\nEnter your option ");
ch = getche();
printf("\n");
}while(ch<'1' || ch >'5');

if (ch == '5' )
 break ;
 system(command[ch-'1']);
 }

getch();
return 0;
}
