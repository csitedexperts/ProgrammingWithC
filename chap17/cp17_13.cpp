/*	CP17_13.CPP		*/
/*   Extended Union in C++	*/
#include<stdio.h>
#include<conio.h>

union Student{
  // By Default public mode
  void  F1();
  void  F2();
  void  F3();
  private:  // private mode
  long  Roll;
  char  Name[10];
  float Marks;
  } ;

Student S;

void Student::F1()
  {
  printf("Enter Roll: ");
  scanf("%ld",  &S.Roll);
  printf("\nRoll : %ld", S.Roll);
  }
  void Student::F2()
  {
  printf("\nEnter Name: ");
  scanf("%s", S.Name);
  printf("\nName : %s",  S.Name);
  }
  void Student::F3()
  {
  printf("\nEnter Marks: ");
  scanf("%f", &S.Marks);
  printf("\nMarks: %.2f", S.Marks);
  }

int main()
{
char ch;
clrscr();
printf("\nPress R for Roll : ");
printf("\nPress N for Name : ");
printf("\nPress M for Marks: ");
printf("\nWhich one do you want to access? ");
scanf("%c", &ch);
switch(ch)
{
 case 'R':
 case 'r':	
S.F1(); 
break;

 case 'N':	
 case 'n':	
S.F2();
break;

 case 'M':
 case 'm':	
S.F3(); 
break;
 default:
   printf("\n\nSelection Failed!");
}
getch();
return 0;
}
