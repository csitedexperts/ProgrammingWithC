/*	CP11_05.C		*/
/*    Structure Variable as Function's parameter */
/*   	Using call by value Method	*/
#include <stdio.h>
struct Student
{
 long  Roll;
 char  *Name;
 float Marks;
} ;

void StdInfo(struct Student);	// Function Prototype

int main()
{
struct Student S = {101, "Masud", 56.5};

printf("\nInside main() before calling StdInfo()");

printf("\nRoll : %ld", S.Roll);
printf("\nName : %s",  S.Name);
printf("\nMarks: %.2f", S.Marks);
printf("\n\nInside StdInfo()");

StdInfo(S);

printf("\n\nInside main() after calling StdInfo()");

printf("\nRoll : %ld", S.Roll);
printf("\nName : %s",  S.Name);
printf("\nMarks: %.2f", S.Marks);

return 0;
}

void StdInfo(struct Student S)
{
S.Roll=102;
S.Name ="Karim";
S.Marks=58.50;
printf("\nRoll : %ld", S.Roll);
printf("\nName : %s",  S.Name);
printf("\nMarks: %.2f", S.Marks);
}
