/*	CP11_09.C		*/
/*	A  Program Using Union	*/
#include<stdio.h>
#include<conio.h>
union Student
{
  long  Roll;
  char  Name[10];
  float Marks;
} ;
union Student S;

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
  scanf("%ld",  &S.Roll);
  printf("\nRoll : %ld", S.Roll);
  break;
case 'N':
case 'n':
  printf("\nEnter Name: ");
  scanf("%s", S.Name);
  printf("\nName : %s",  S.Name);
  break;
case 'M':
case 'm':
  printf("\nEnter Marks: ");
  scanf("%f", &S.Marks);
  printf("\nMarks   : %.2f", S.Marks);
  break;

default:
   printf("\n\nSelection Failed!");
 }
getch();
return 0;
}
