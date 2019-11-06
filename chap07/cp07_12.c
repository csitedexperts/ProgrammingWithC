/* 		CP07_12.C
 Example of Multifunction Program */
#include<stdio.h>
#include<conio.h>

void main()
{
int F1();  // F1() Function Prototype
printf("\nInside main() ......");
F1();
}
int F1()
{
int F2();   // F2() Function Prototype (Multifunction)
printf("\nInside F1() ......");
F2();
return 0;
}
int F2()
{
printf("\nInside F2() ......");
return 0;
}
