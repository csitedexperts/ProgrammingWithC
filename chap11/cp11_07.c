/*	CP11_07.C	*/
/*	Accessing Structure Members using  Same Type Pointer Variable*/
#include <stdio.h>
#include <conio.h>

struct Student
{
  long  Roll;
  char  Name[22];
  char  Semester[10];
  float Marks;
} ;

int main()
 {
 struct Student S, *Sptr;;
 Sptr= &S;

 printf("Enter Roll: ");
 scanf("%ld",  &Sptr->Roll);
 printf("\nEnter Name: ");
 scanf("%s", Sptr->Name);
 printf("\nEnter Semester: ");
 scanf("%s", Sptr->Semester);
 printf("\nEnter Marks: ");
 scanf("%f", &Sptr->Marks);

 printf("\n\nRoll : %ld", Sptr->Roll);
 printf("\nName : %s",  Sptr->Name);
 printf("\nSemester: %s",  Sptr->Semester);
 printf("\nMarks   :%.2f", Sptr->Marks);
 
 getch();
 return 0;
 }
