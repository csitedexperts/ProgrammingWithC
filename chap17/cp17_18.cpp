/*  CP17_18.CPP	*/
/*  Adding Any two Values Using Class Template */
#include<iostream.h>
#include<stdio.h>

template <class T>

class Sample 
{
private:
    T Value1, Value2, Sum ;

public:
void GetData() 	 // Inner Definition 
{	
   cin >> Value1 >> Value2 ;   }
   void Display();
   void Menu();
};
/*	// Outer Definition 
 template  <class T>
void Sample <T> :: GetData()
 {
  cin >> Value1 >> Value2 ;
 }
*/
template  <class T>
void Sample <T> :: Display()
 {		// Outer Definition 
  T Sum ;
  Sum =  Value1 + Value2 ;
  cout<<"Sum of " <<Value1<<" and "<<Value2<<" is: "<<Sum;
  cout << endl;
 }

void main()	
{
 Sample <int> Int;
 Sample <float> Float;
 Sample <double> Double;
 cout <<"Select one of the following options :" << endl;
 char Ch;
 cout <<"Press I for Integer Addition :" << endl;
 cout <<"Press F for Float   Addition :" << endl;
 cout <<"Press D for Double  Addition :" << endl;
 cout <<"Press Q to  Quit... :" << endl;
 while((Ch = getchar()) != 'Q')
  {
 switch (Ch)
 {
 case 'I' :
 cout << "\nEnter two Integer Numbers : " ;
 Int.GetData();
 Int.Display();
 break;
 case 'F' :
 cout << "\nEnter two Float Numbers : " ;
 Float.GetData();
 Float.Display();
 break;
 case 'D' :
	 cout << "\nEnter two Double Numbers : " ;
	 Double.GetData();
	 Double.Display();
	 break;
      }  // end of switch 
  }  // end of while 
}  // end of main
