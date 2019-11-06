/*	CP05_05.C	*/
/* Calculating Area of a Circle  */
#include<stdio.h>
#include<conio.h>
void main()
{
 int r;
 float pi=3.14159, area;
 printf("Please enter the radius : ");
 scanf("%d",&r);
 area=pi*r*r;
 printf("\nArea of the circle = %f",area);
 getch();
}
