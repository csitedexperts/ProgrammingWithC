/*	CP12_01.C	*/
/* 	Creating a new data file */
#include<stdio.h>
#include<conio.h>

void main()
 {
  char Ch ;
  FILE *fp;
  fp = fopen("C:\\MM.txt", "w+");	//Opens a new file

  //  Other codes ... ... ...

  fclose(fp);  //Closes the file
  printf("The file %s  is created successfully.", "C:\\MM.txt");
  getch();
 }
