/* 		CP07_23.C
 Examle with local variable */
#include<stdio.h>
#include<conio.h>
void main()
{
int x = 0 ;	// Local Variable

 if (x <= 5)
 {
  int x = 5;
  printf("\nInside the if block x = %d", x);
 }
 printf("\nOutside the if block x = %d", x);
 getch();
}
