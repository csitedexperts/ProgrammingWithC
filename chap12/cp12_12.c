/*	CP12_12.C	*/
/*    Printing Styructured Variable From Data Fole */
#include<stdio.h>
#include<conio.h>
#include <stdio.h>

struct Students
  	{
     long   Roll;
     char  Name[20];
     float Marks;
	};

int main()
 {
 FILE *fp;
 struct Students S;
 
if((fp = fopen("TEST.TXT", "w+")) == NULL) 
/* open file TEST.TXT */
   {
      fprintf(stderr, "Cannot open output file.\n");
      return 1;
   }

  printf("\nEnter Student's Record:");
  printf("\nEnter Roll : ");
  scanf("%ld", &S.Roll);
  printf("\nEnter Name : ");
  scanf("%s", S.Name);
  printf("\nEnter Marks: ");
  scanf("%f", &S.Marks);
  fwrite( &S, sizeof(S), 1, fp);
  //write struct S to file 
  fflush(fp);

  fclose(fp); // close file
  fp = fopen("TEST.TXT", "r+"); // reopen file
  fread(&S, sizeof(S), 1, fp); // read from file
  fwrite( &S, sizeof(S), 1, stdprn);  // Sends to Printer
  return 0;
}
