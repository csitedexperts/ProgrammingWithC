/* 	CP10_13.C		*/
/*	 String Operation Using getchar() & putchar() Functions*/
#include <stdio.h>
int main()
{
char ch;
 printf("Enter Your String: ");
 while ((ch = getchar()) != '\n')
  {
  putchar(ch);
  }
 printf("\nYour Entered Above String.\n");
getch();
return 0;
}
