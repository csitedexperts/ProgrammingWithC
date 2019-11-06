/*	 CP07_28.C  */
/*	 Using Static Variable */
#include<stdio.h>
#include<conio.h>
int F();	// Function Prototype
int main()
 {
 int i, sum=0;
 for( i = 0; i<5; i++)
 F();
 getch();
 return 0;
 }
int F()
 {
 int Autox = 1;		// Automatic Declaration
 static int Staticx = 1;	// Static Declaration
 printf("\nAutomatic x=%d\t Static x =%d", Autox, Staticx);
 ++Autox;
 ++Staticx;

 return 0;
 }
