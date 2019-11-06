/*  CP11_04.C	*/
/*  Another Example of Nested Structure  */
#include<stdio.h>

struct Result
{
long Roll;

 struct Exam
 {
  float Marks;

  struct Student
   {
   char  Name[22];
   } S; // S is a Student type variable

 } E ; // E is a Exam type variable
 
};  // End of Result Structure

void main()  
{
 struct  Result  R;

 /* R is a Result type variable  */

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
