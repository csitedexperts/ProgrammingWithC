/*	CP11_18.C		*/
/*	A  Program Using Union	*/
#include<stdio.h>
#include<conio.h>

enum   Date
{
 Sun=12, Mon, Tue, Wed, Thu, Fri=10, Sat 
 };    // end of enumreator

enum Date PreviousDate, CurrentDate, NextDate;

void main()
{
PreviousDate= Sun;
CurrentDate = Mon;
NextDate = Tue;

printf("\nCurrent  date: %d", CurrentDate);
printf("\nPrevious date: %d", PreviousDate);
printf("\nNext date: %d", NextDate);
}
