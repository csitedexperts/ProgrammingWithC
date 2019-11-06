/* 	CP12_05.C	*/
/*	Writing to and reding from data file using putc() & getc() Functions	*/
#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *f_open;
 char ch, *f_name;
 printf("\nPlease type a file name : ");
 scanf("%s",f_name);

 if((f_open=fopen(f_name, "r")) == NULL)
 {
  f_open = fopen(f_name, "w");
 printf("\nA new file is opened, ");
 printf("\Enter data and press Ctrl+Z to save :\n\n ");
 
 while ((ch = getchar() ) !=EOF)
  {
  putc(ch, f_open);
  fflush(f_open);
  }
 
 fclose(f_open);
 f_open = fopen(f_name, "r");
 printf("\n\nThe file: %s contains: \n\n", f_name);
 
 while ((ch = getc(f_open)) !=EOF)
   printf("%c", ch);
 fclose(f_open);
  }

 else
 {
 f_open = fopen(f_name, "a");
 printf("\nThe file %s  exists, ", f_name);
 printf("\nAdd data and press Ctrl+Z to save :\n\n");

 while ((ch =getchar()) !=EOF)
  {
  putc(ch, f_open);
  fflush(f_open);
  }
 fclose(f_open);
 f_open= fopen(f_name, "r");
 printf("\n\nNow the file %s contains: \n\n", f_name);

 while ((ch =getc(f_open)) !=EOF)
 printf("%c",ch);
 fclose(f_open);
 }
getch(); 
}
