/* 	CP17_12.CPP		*/
/*  	Extended Structure in C++	*/
#include <stdio.h>

struct Student
{
public:
void GetData();
void Dispaly();
private:
  long  Roll;
  float Marks;
  char  Name[22];
} ;
Student S;	// S is a Structured variable	

void Student::GetData()
{
printf("Enter Roll: ");
scanf("%ld",  &S.Roll);
printf("\nEnter Name: ");
scanf("%s", S.Name);
printf("\nEnter Marks: ");
scanf("%f", &S.Marks);
}

void Student::Dispaly()
{
printf("\nRoll: %ld", S.Roll);
printf("\nName: %s",  S.Name);
printf("\nMarks:%.2f", S.Marks);
}

int main(){
S.GetData();
S.Dispaly();
return 0;
}
