/*	 CP10_17.C	*/
/* Calculating Length of a String  using User-Defined Function */
#include <stdio.h>
int SLength(char *ch)
 {
 int i=0;
 while(ch[i])
 i++;
 return i;
}
void main()
 {
 char *str;
 int  SL;
 printf("Enter a String:");
 scanf("%[^\n]", str); 	// or, gets(str);
 SL = SLength(str);
 printf("Character Length of  '%s' is: %d", str, SL);
}
