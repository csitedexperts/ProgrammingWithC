/* 			CP11_03.C	*/
/*  Example of Nested Structure Variable  */
#include<stdio.h>
struct Student
 {
  char  Name[22];
 }; // End of Student Structure
struct Exam
 {
  float Marks;
  struct Student S; // S is a Variable of Student Structure
 }; // End of Exam Structure

struct Result
 {
  long Roll;
  struct Exam E; // E is a Variable of Exam Structure
 };  // End of Result Structure

void main()  
{
 struct  Result 	R;
 printf("Enter Roll : ");
 scanf("%ld", &R.Roll);
 printf("\nEnter Marks: ");
 scanf("%f", &R.E.Marks);
 printf("\nEnter Name : ");
 scanf("%s", R.E.S.Name);
 printf("\nRoll  is : %ld",R.Roll);
 printf("\nMarks is : %.2f", R.E.Marks);
 printf("\nName  is : %s", R.E.S.Name);
}
