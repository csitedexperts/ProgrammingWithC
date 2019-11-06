/* 	CP03_03.C	*/
/*	A Sample C Program that Sends Output to Priiter*/
#include<stdio.h>

void main()
{
  char *Name ;
  printf("Enter your name :") ;
  scanf("%[^\n]", Name);

  fprintf(stdprn, Name) ;
}
