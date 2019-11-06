/* 	CP12_15.C	*/
/*   Using File Pointer as Function's Parameter*/
#include<stdio.h>
#include<conio.h>

void GetFile(FILE *fp);	// Function Prototype

void main()
 {
 FILE *fp;
 
 fp = fopen ("c:\\Newfile.txt", "w");
 GetFile(fp);
 fclose(fp);
 getch(); 
 }

 void GetFile(FILE *fp)
 {
  char ch[100];

  printf("\nEnter a line of text (Break by ENTER)");
  printf("\n\t");
  gets(ch);
  fprintf(fp, "%s", ch);

  fflush(fp);
  fclose(fp);

  printf("\n\nThe File (c:\\Newfile.txt) Contains: \n");
  fp = fopen("c:\\Newfile.txt", "r");
  fgets(ch, 100, fp);
  printf("\n\t%s", ch);
  fclose(fp);
}
