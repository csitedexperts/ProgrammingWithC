/*	CP07_45.C	*/
/*	Example of Conditional Compilation Directives*/
#include<stdio.h>
#include<conio.h>
#define  OOP  "Object Oriented Programming"
void main()
{
#ifdef  OOP
  printf("%s", OOP);
#else
 printf("\nNot Object Oriented Programming");
#endif
getch();
}
