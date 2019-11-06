/* 	CP12_16.C		*/
/*    Using File Pointer as Function's Return Value*/
#include<stdio.h>
#include<conio.h>

FILE *fp;	// Global File Pointer
char fn[20];    // Global File Name
FILE *FileName();     // Function Prototype
void GetFile(FILE *fp);	// Function Prototype

void main()
 {
 
 fp = FileName();
 GetFile(fp);
 getch();

}

 FILE *FileName()
 {
  printf("\nEnter your file name: ");
  gets(fn);
  fp = fopen(fn, "w");
  return (fp);
  }

 void GetFile(FILE *fp)
  {
  char ch[100];
  printf("\nEnter a line of texts (Break by ENTER)");
  printf("\n\t");
  gets(ch);
  fprintf(fp, "%s", ch);
  fflush(fp);
  fclose(fp);

  printf("\nThe File (%s) Contains: \n", fn);
  fp = fopen(fn, "r");
  fgets(ch, 100, fp);
  printf("\n\t%s", ch);
  fclose(fp);
 }
