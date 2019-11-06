/*    CP12_17.C	*/
/*	Random File Accessing	*/
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

struct Student
   {
     long Roll;      // 4 Bytes
     char Name[20];  // 20 Bytes
     float Marks;    // 4 Bytes
   };

 int main()
 {
  struct Student S;  // 28 Bytes
  FILE *fp;
  char fname[20];
  char ch1, ch2, ch3;
  int i, j, k, T, N, Loc;  
  printf("\nEnter a File Name: ") ;
  scanf("%s", fname);

 if((fp=fopen(fname, "r+")) == NULL)
  {
  fp = fopen(fname, "w+");     //open new file
  printf("\nA new file (%s) is oppened:\n", fname);
  printf("\nAdd New Student (n/N for no)? : ");

  ch1=getche();
   if (ch1=='N'||ch1=='n')
    exit(0);  // Normal Termination
   else
    goto AddMore;
  }

 else
  {
  fp = fopen(fname, "r+");
  printf("\nThe file (%s)  exists and contains:\n\n", fname);
  fseek(fp, 0, SEEK_SET);  // Go to start
  //rewind(fp);
  printf("\n      Roll      Name    Marks");
  printf("\n      ~~~~      ~~~~    ~~~~~");

 while((fread(&S, sizeof(S), 1, fp))!=NULL)
  {   // read from file & display to monitor
  printf("\n% %d.   5ld  %10s  %5.2f\n", i, S.Roll, S.Name, S.Marks);
  i++;
  }
 fflush(fp);
 }

  //  Add new Student
  printf("\nAdd More Student (n/N for no)? : ");
  
  ch2=getche();
  if (ch2=='N'||ch2=='n')
  goto NoMore;

  AddMore:

  printf("\nEnter Student's Record: ");
  printf("\nEnter Roll : ");
  scanf("%ld", &S.Roll);
  printf("\nEnter Name : ");
  scanf("%s", S.Name);
  printf("\nEnter Marks: ");
  scanf("%f", &S.Marks);

  fwrite((char*)&S, sizeof(S), 1, fp); //writes to file
  fflush(fp);
  printf("\nAdd More Student (Y/y for yes)? : ");
  
  ch3=getche();
  if (ch3=='Y'||ch3=='y')
  goto AddMore;

  NoMore:
  fseek(fp, 0, SEEK_SET);  // Go to start
  printf("\n\nContents of the file:");
  printf("\n      Roll      Name    Marks");
  printf("\n      ~~~~      ~~~~    ~~~~~");
  j = 1;

  while((fread(&S, sizeof(S), 1, fp))!=NULL)
  {	  // read data from file
   printf("\n %d.  %5ld  %10s  %5.2f\n", j, S.Roll, S.Name, S.Marks);
   j++;
  }

   // Find number of Students in the file
  T = ftell(fp);
  N = T/sizeof(S);

 printf("\nNumber of Students : %d ", N);
 printf("\nTotal bytes in the file: %d", T);
  // Modify details of a student
 printf("\nEnter number of item to be updated (1-%d):", N) ;

 scanf("%d", &i);

 if(i<1||i>N)
   exit(0);	//Normal Termination 

 Loc = (i-1) * sizeof(S);
 if(feof(fp))
 fseek(fp, Loc, 0);

  printf("\nEnter New Record: ");
  printf("\nEnter Roll : ");
  scanf("%ld", &S.Roll);
  printf("\nEnter Name : ");
  scanf("%s", S.Name);
  printf("\nEnter Marks: ");
  scanf("%f", &S.Marks);

  fwrite(&S, sizeof(S), 1, fp);
  fflush(fp);
   // Show updated file
  fseek(fp, 0, SEEK_SET);  // Go to start

  printf("\n\nContents of the updated file: ");
  printf("\n      Roll      Name    Marks");
  printf("\n      ~~~~      ~~~~    ~~~~~");
   k = 1;

   while((fread(&S, sizeof(S), 1, fp))!=NULL)
   {
   printf("\n %d.  %5ld  %10s  %5.2f\n", k, S.Roll, S.Name, S.Marks);
   k++;
   }

 fclose(fp);
 getch();
 return 0;
}
