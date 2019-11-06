/* 	CP11_10.C		*/
/*  	Example of Nested Union Variable  */
#include<stdio.h>
#include<conio.h>

union Student
{
    char  Name[22];
 }; // End of Student union

struct Exam
 {
   float Marks;
   union Student S; // S is a variable of Student union 
 }; // End of Exam union

union Result
  {
   long Roll;
   struct Exam E; // E is a variable of Exam union 
   };  // End of Result union

union Result 	R;

int main()
{
char ch;
printf("\nPress R for Roll : ");
printf("\nPress N for Name : ");
printf("\nPress M for Marks: ");
printf("\n\nWhich one do you want to access? ");
scanf("%c", &ch);
switch(ch)
{
case 'R':
case 'r':
  printf("Enter Roll: ");
  scanf("%ld",  &R.Roll);
  printf("\nRoll : %ld", R.Roll);
  break;
case 'N':
case 'n':
  printf("\nEnter Name: ");
  scanf("%s", R.E.S.Name);
  printf("\nName : %s",  R.E.S.Name);
  break;
case 'M':
case 'm':
  printf("\nEnter Marks: ");
  scanf("%f", &R.E.Marks);
  printf("\nMarks   : %.2f", R.E.Marks);
  break;
default:
   printf("\n\nSelection Failed!");
}
getch();
return 0;
}
