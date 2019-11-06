/*	 CP07_36.C
Function with Argument Variables */
#include<stdio.h>

float Total(float Marks1, float Marks2)
{
 float Total;
 Total = Marks1 + Marks2;
 printf("\nMarks1 : % .2f", Marks1);
 printf("\tMarks2 : % .2f", Marks2);
 printf("\tTotal : % .2f", Total);
 return 0;
}
void main()
{
Total(25.35, 40.75);
Total(36.50, 38.50);
Total(23.50, 40);
}
