/* 	CP07_27.C	*/
/*	Examle of using automatic variables */
#include<stdio.h>
#include<conio.h>
int Sum();   // Sum() Function Prototype
int Mul();  // Mul() Function Prototype
int x=100, y=100;  // Global Variable (Never be auto)
void main()  
{
 auto int x=10, y=10;   // Local Variable(auto Declaration)
 printf("\nInside main() ......");
 printf("\nx= %d y= %d", x, y);
 Sum(); 	// Calling Sum() function
 Mul();	// Calling Mul() function
 getch();
}
int Sum()
{
auto int x=20, y=20;    // Local Variable (auto Declaration)
printf("\nInside Sum() ......");
printf("\nx= %d y= %d", x, y);
return 0;
}
int Mul()
{
int x=30, y=30;   // Local Variable (By Default Auto)
printf("\nInside Mul() ......");
printf("\nx= %d y= %d", x, y);
return 0;
}
