/*    CP16_59.C	 */
/* 	Sending output to Printer  */
#include<stdio.h>
void main()
{
  char *text ;
  printf("Enter your text : ") ;
  scanf("%[^\n]", text);
  fprintf(stdprn, text) ;
}
