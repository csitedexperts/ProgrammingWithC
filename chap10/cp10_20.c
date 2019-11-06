/*	 CP10_20.C	*/
/*  Example of strlwr() Library Function*/
#include <stdio.h>
#include<string.h>
int main()
 {
 char *str1;
 printf("Enter a string: ");
 scanf("%[^\n]", str1);  // or, gets(str1);
 printf("\nYour string in lower case is : ");
 strlwr(str1);
 puts(str1);
 getch();
 return 0;
 }
