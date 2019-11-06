/* CP10_05.C	*/
/*  String termination using Null Character  */
#include   <stdio.h>

int main()
{
 char Name[20] = "Masud\0 Karim";
 char *Dept = "Computer Science" ;
 printf("Name : %s", Name);
 printf("\n");
 printf("Dept : %s", Dept);

getch();
return 0;
}
