/*	 CP07_32.C  */
/*	Using External Variable */
#include<stdio.h>
#include<conio.h>

void External(); 	// Function Prototype
 
int x=10;	// Global Variable
int x; 	// Global Also 
/* This may causes an ERROR, if so, then cut this */

void main()
 {
 printf("\nBefore Calling External(), x=%d",x);
 External();          // Calling External()
 printf("\nAfter  Calling External(), x=%d",x);
 getch();
 }

 void External()	// Function Definition
 {
 extern int x; // By default extern 
 x=20;
 printf("\nInside External() x=%d",x);
 }
