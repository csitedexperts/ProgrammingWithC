/*	CP07_42.C	*/
/*	Example of using Built-in Macro*/
#include<stdio.h>
#include<conio.h>

int main()
{
printf("\nCurrent date is: %s", _ _DATE_ _);
printf("\nCurrent time is: %s", _ _TIME_ _);
printf("\nRunning File is: %s", _ _FILE_ _);
printf("\nNumber of lines: %d", _ _LINE_ _);

getch();
return 0;
}
