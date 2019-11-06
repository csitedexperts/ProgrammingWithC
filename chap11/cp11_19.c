/* 	CP11_19.C	*/
/*	Using typedef Statement */
#include <stdio.h>
typedef float Real; // float is defined as Real
struct StdInfo
{
  long  Roll;
  char  Name[22];
  Real Marks;
};

typedef struct StdInfo Student; 
      /* StdInfo is defined as Student		*/
Student S; /* S is a StdInfo type variable		*/
int main()
{
printf("Enter Roll: ");
scanf("%ld",  &S.Roll);
printf("\nEnter Name: ");
scanf("%s", S.Name);
printf("\nEnter Marks: ");
scanf("%f", &S.Marks);
printf("\n\nRoll : %ld", S.Roll);
printf("\nName : %s",  S.Name);
printf("\nMarks:%.2f", S.Marks);
return 0;
}
