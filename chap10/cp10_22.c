/*	 CP10_22.C	*/
/*  Example of strrev() Library Functions*/
#include <stdio.h>
#include<string.h>

int main()
 {
 char *str1;
 printf("Enter a string: ");
 scanf("%[^\n]", str1);  // or, gets(str1);
 printf("\nYour string in reverse order is : ");
 strrev(str1);
 puts(str1); 

getch();
return 0;
}
