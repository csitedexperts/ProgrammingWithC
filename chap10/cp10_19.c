/*	CP10_19.C	*/
/*  Example of strlen() Function*/
#include <stdio.h>
#include<string.h>

int main()
 {
 char *str1;
 int l;

 printf("Enter a string: ");
 scanf("%[^\n]", str1);  // or, gets(str1);

 l = strlen(str1);
 printf("\nCharacter Length of  \"%s\" is: %d", str1, l);

getch();
return 0;
}
