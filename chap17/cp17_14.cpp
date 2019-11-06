/*	CP17_14.CPP */
/* 	Inheriting Base Class's members to Derived Class */

#include<iostream.h>

class Student
 {
public:
long  Roll;
float	 Marks;
 };

class Result: public Student
 {
public:
void GetData();
void Display();
 };

void Result:: GetData()
 {
 cout << "Enter Roll: ";
 cin >> Roll ;
 cout << "Enter Marks: ";
 cin >> Marks ;
 }

void Result:: Display()
 { 
 cout << "Roll  : " << Roll << endl; 
 cout << "Marks : " << Marks << endl; 
 }

int main()
{
 Result R; // R is object of Result Class
 R.GetData();
 R.Display();
 return 0;
}
