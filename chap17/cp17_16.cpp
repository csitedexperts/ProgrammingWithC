/* 	CP17_16.CPP 	*/
/* 	Overloading Binary plus operator(+) */
#include<iostream.h>
#include<stdio.h>
#include<string.h>
class String{
	char Name[30];
 public:
 	void GetName();
	void ShowName();
	String operator+(String); // Overloaded Function
  };
void String::GetName()
   {
   gets(Name);
   }
void String::ShowName()
   {
   puts(Name);
   }
String String:: operator+(String N)
  {
  String temp;
  strcpy(temp.Name, Name);
  strcat(temp.Name, N.Name);
  return(temp);
  }

void main()
{
  String N1, N2, N3;
  cout<<"Enter First Name:";
  N1.GetName();
  cout<<"Enter Last  Name:";
  N2.GetName();
  cout<<endl;
  N3 = N1+ N2;
  cout<<"First Name is:";
  N1.ShowName();
  cout<<endl;
  cout<<"Last Name  is:";
  N2.ShowName();
  cout<<endl;
  cout<<"Full Name  is:";
  N3.ShowName();
 }
