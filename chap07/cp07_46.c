/*	CP07_46.C	*/
/*	Example of #pragrma directive*/
#include<stdio.h>
#include<conio.h>

void StartFun();	 // StartFun() Prototype
void ExitFun(); // StartFun() Prototype

#pragma startup StartFun // startup pragma
#pragma  exit   ExitFun // exit pragma 

void main()
{
printf("\nExecuting main() Function");
}
void StartFun()
{
printf("\nExecuting StartFun() Function");
}
void ExitFun()
{
printf("\nExecuting ExitFun() Function");
}
