/* CP17_17.CPP	*/
/* Square of any Numbers  using Function Template */
#include<iostream.h>

template <class T>

T Square(T Value)
{
 T Temp;
 return ( Temp * Temp);
}

int Square(int );
float Square(float);
double Square(double);

void main()
{
 int  I;
 float F;
 double D;
 cout << "Enter an Integer: " ;  cin >> I;
 cout << "Enter a Float: " ;   cin >> F;
 cout << "Enter a Double: " ;  cin >> D;
 cout <<"\nAfter Squaring.... " << endl << endl;
 cout <<"Square of " << I << " = " << Square(I);
 cout << endl;
 cout <<"Square of " << F << " = " << Square(D);
 cout << endl;
 cout <<"Square of " << D << " = " << Square(F);
}
