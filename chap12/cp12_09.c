/*	 CP12_09.C
Writing & Reading Structure variables to data file	*/
#include<stdio.h>
#include<conio.h>

struct Students
  	{
     long   Roll;
     char  Name[20];
     float Marks;
	};

void main()
{
struct Students S[30];
int  i, N;  
char  *fname;
FILE  *fp;
fp=fopen("C:\\struct", "wb") ;

XX:
printf("\nEnter Number of Students (max 30): ");
scanf("%d", &N); 
  if(N<=0 || N>30)
  goto XX;

for ( i =1; i<=N; i++)
{    /* Input from keyboard and write to file*/
  printf("\nEnter Record of S[%d]:", i);
  printf("\nEnter Roll : ");
  scanf("%ld", &S[i].Roll);
  printf("\nEnter Name : ");
  scanf("%s", S[i].Name);
  printf("\nEnter Marks: ");
  scanf("%f", &S[i].Marks);
 fwrite( &S[i], sizeof(S[i]), 1, fp);  //write to file
}

fclose(fp);
fp=fopen("C:\\struct", "rb") ;

for ( i =1; i<=N; i++)
 {  /* read from file & display to monitor*/
 fread( &S[i], sizeof(S[i]), 1, fp);  // read from file
 printf("\nRecord of S[%d]:", i);
 printf("\n~~~~~~~~~~~~~~");
 printf("\nRoll : %ld", S[i].Roll);
 printf("\nName : %s",  S[i].Name);
 printf("\nMarks: %.2f",  S[i].Marks);
 printf("\n");
 }

 fclose(fp);
 getch();
}
