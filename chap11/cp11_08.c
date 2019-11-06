/*	CP11_08.C		*/
/*	Accessing Pointer Type Structure Members*/
#include <stdio.h>
#include <conio.>

struct  Student
 {
 int   *Roll ;	// int   type pointer variable
 char  *Name;   // char  type pointer variable
 char  *Semester; //  char type pointer variable
 float *Marks;  // float type pointer variable
 };
 
int main()
 {
 struct Student S1, *Sptr;
 Sptr = &S1;
 
 *Sptr->Roll =101;
 Sptr->Name = "MASUD";
 Sptr->Semester="Second";
 *Sptr->Marks = 65.5;

 printf("\nRoll: %d",  *Sptr->Roll);
 printf("\nName: %s",    Sptr->Name);
 printf("\nSemester: %s", Sptr->Semester);
 printf("\nMarks: %.2f",*Sptr->Marks);
 return 0;
} 

