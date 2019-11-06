/* 	CP07_16.C	*/
/*	Function with multiple return statements */
#include<stdio.h>
float Total();
int main()
{
 float Tutorial, GTotal;
 printf("Enter Tutorial Marks : ");
 scanf("%f", &Tutorial);
 GTotal = Total() + Tutorial;
 printf("\nTutorial    : % .2f", Tutorial);
 printf("\nGrand Total : % .2f", GTotal);
return 0;
}

float Total()
{
 float Marks1, Marks2, Total;
 printf("Enter Marks1 : ");
 scanf("%f", &Marks1);
 printf("Enter Marks2 : ");
 scanf("%f", &Marks2);
 printf("\nMarks1       : % .2f", Marks1);
 printf("\nMarks2       : % .2f", Marks2);

 if (Marks1<0)
  {
  printf("\n\t(Marks1 Invalid!)");
  return(Marks2);
  }
 else if (Marks2<0)
  {
  printf("\n\t(Marks2 Invalid!)");
  return(Marks1);
  }
 else
  Total = Marks1 + Marks2;
 return(Total);
}
