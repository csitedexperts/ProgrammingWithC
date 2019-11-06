/*	CP11_02.C 	*/
/* 	Array of Structure Variables */
#include <stdio.h>
#include <conio.h>

#define Max  10

struct Student
{
 long Roll;		 // 4 Bytes
 char Name[22];	// 22 Bytes	
 float Marks;	// 4  Bytes 
};

int main()
{
 struct Student S[Max];
 int N, i;
 printf("Enter Number of Students (<=10): ");
 scanf("%d", &N);
 for(i=0;i<N; i++)
 {
  printf("\n\nEnter Record of S[%d]: ", i);
  printf("\nEnter Roll : ");
  scanf("%ld",&S[i].Roll);
  printf("\nEnter Name : ");
  scanf("%s", S[i].Name);
  printf("\nEnter Marks : ");
  scanf("%f", &S[i].Marks);
 }
for(i=0; i<N; i++)
 {
  printf("\n\nThe Record of S[%d]: ", i) ;
  printf("\nRoll : %d", S[i].Roll);
  printf("\nName : %s", S[i].Name);
  printf("\nMarks: %.2f", S[i].Marks);
 }
getch();
return 0;
}
