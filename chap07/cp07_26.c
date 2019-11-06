/*  CP07_26.C	*/
/*  Accessing global variable by using :: operator to use */ 

#include<stdio.h>
#include<conio.h>

int x = 50;

int main()
 {
  int x = 15;
  printf("Local  x = %d\n", x);
  printf("Global x = %d\n", ::x);
  printf("Local  x = %d\n", x);

 getch();
 return 0;
 }
