/*	 CP07_14.C	*/
/* Function with any return value */ 
#include<stdio.h>
#include<conio.h>
int Myfunction();	// Function Prototype
int main()
{
 printf("Before calling Myfunction() \n");
 
 Myfunction(); // Calling Myfunction()
  
 printf("After  calling Myfunction() \n");
 return(0); // main() function's return statement
}

int Myfunction()
{
 // ... ...
 printf("This is within Myfunction() \n");
 // ... ...
 return (10); // Myfunction's return statement
}
