/*	CP06_33.C	*/
/* Conversion From Degree  Fer to Deg Cel */
#include<stdio.h>
#include<conio.h>

void main()
 {
  int f=0;
  float c;
  printf("\n Fahrenheit      Celsius");
  printf("\n ----------      -------");

 while(f<=200)
  {
   printf("\n    %d",f);
   c=((5.00/9.00)*(f-32.00));
   printf("\t\t %.2f",c);
   f+=20; // f = f+20;
  } 

 getch();
}
