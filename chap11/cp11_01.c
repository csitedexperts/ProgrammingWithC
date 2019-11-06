/*	CP11_01.C		*/
/*	A  Program Using Structure	*/
#include <stdio.h>

struct Student
{
  long  Roll;
  char  Name[22];
  char  Semester[10];
  float Marks;
} ;

struct Student S; 
/* S is a structured (Student type) variable */
int main()
 {
 printf("Enter Roll: ");
 scanf("%ld",  &S.Roll);
 printf("\nEnter Name: ");
 scanf("%s", S.Name);
 printf("\nEnter Semester: ");
 scanf("%s", S.Semester);
 printf("\nEnter Marks: ");
 scanf("%f", &S.Marks);
 printf("\n\nRoll : %ld", S.Roll);
 printf("\nName : %s",  S.Name);
 printf("\nSemester: %s",  S.Semester);
 printf("\nMarks   :%.2f", S.Marks);
 return 0;
 }
