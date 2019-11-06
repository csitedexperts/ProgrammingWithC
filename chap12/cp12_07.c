/*	CP12_07.C	*/
/* 	Example fputs() & fgets() Functions 	*/
#include<stdio.h>
#include<conio.h>

void main()
 {
  FILE *fp;
  char *f_name;
  char *ch ="Programming in C";
  
  printf("\nEnter a file name :");
  scanf("%s", f_name);
  fp=fopen(f_name, "wb");

  fputs(ch, fp);
  fclose(fp);

  fp=fopen(f_name, "rb");
  printf("\nThe file (%s) contains:\n\n", f_name);

  fgets(ch, sizeof(ch), fp);
  printf("\n%s", ch);

  fclose(fp);
  }
