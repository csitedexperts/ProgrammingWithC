/*	CP11_06.C	*/
/*    Structure Variable as Function's Return Value */
#include <stdio.h>
struct Student
{
 long  Roll;
 char  *Name;
 float Marks;
} ;
struct Student ModiInfo(struct Student);

void main()
{
 struct Student S1= {101, "Masud", 56.5};
 
 struct Student S2; 
 
 printf("\n\nInside main() before returning value:");
 printf("\nRoll : %ld", S1.Roll);
 printf("\nName : %s",  S1.Name);
 printf("\nMarks: %.2f",S1.Marks); 
 
 printf("\n\nInside StdInfo()");
 S1= ModiInfo(S2); 
 
 printf("\n\nInside main() after returning value:");
 printf("\nRoll : %ld", S1.Roll);
 printf("\nName : %s",  S1.Name);
 printf("\nMarks: %.2f",S1.Marks);
}

struct Student ModiInfo(struct Student S2)
{
 S2.Roll=102;
 S2.Name ="Karim";
 S2.Marks=58.50;
 
 printf("\nRoll : %ld", S2.Roll);
 printf("\nName : %s",  S2.Name);
 printf("\nMarks: %.2f",S2.Marks);
}
