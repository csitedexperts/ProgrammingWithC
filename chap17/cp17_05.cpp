/* 	CP17_05.CPP	*/
/*	Using C++ Casting Operation*/
#include <iostream.h>
void main()
{
float  x  = 10, R  ;
float y = 5.5;
R =  x /y ; 	
cout<<"\nWithout casting "<<x<<"/"<<y<<" = "<< R;

R =  x /int(y) ; // Using C++ Style Casting
cout<<"\nAfter casting "<<x<<"/int("<<y<<") = "<< R;
}
