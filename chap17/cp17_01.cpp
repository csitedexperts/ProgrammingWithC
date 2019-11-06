/*	CP17_01.CPP		*/
/* Using Class and Object 	*/
#include<iostream.h>

class Student
 {
private:
long 	Roll;
char 	Name[40];
float	Marks;
public:
void 	GetData();
void 	Display();
  }; 
  
void 	Student::GetData()
  {
  cout<<"Enter Roll : ";
  cin >> Roll;
  cout<<"Enter Name : ";
  cin >> Name; 
  cout<<"Enter Marks: "; 
  cin >> Marks;
  }

void  Student::Display()
 {
  GetData();   
  cout << "\nRoll  is : " << Roll;                 
  cout << "\nName  is : " << Name;
  cout << "\nMarks is : " << Marks ;
 }

void	main()
 {
  Student S;
  S.Display();	// Accessing Public Member Function
 }
