/*	CP17_15.CPP	*/
/*	Program to Double a Number	using Overloaded Functions  */
#include<iostream.h>

int    DoubleIt(int    Number) ;
long   DoubleIt(long   Number) ;
float  DoubleIt(float  Number) ;
float  DoubleIt(double Number) ;

int DoubleIt(int Number)
{
 int D;
 D = Number * 2 ;
 cout <<"\nDouble of the integer " << Number <<" is " << D;
 return 0;
}

long DoubleIt(long Number)
{
 long D;
 D = Number * 2 ;
 cout <<"\nDouble of the long integer " << Number <<" is " <<  D;
 return 0;
}

float DoubleIt(float Number)
{
 float D;
 D = Number * 2 ;
 cout <<"\nDouble of the float " << Number <<" is " << D;
 return 0;
}
float  DoubleIt(double Number)
{
 double  D;
 D = Number * 2 ;
 cout <<"\nDouble of the double " << Number <<" is " << D;
 return 0;
}

int main()
{
 DoubleIt(2);
 DoubleIt(65575);
 DoubleIt(655.75);
 DoubleIt(3.4E45);
 return 0;
}
