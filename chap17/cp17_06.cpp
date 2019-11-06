/*	CP17_06.C	*/
/*	Using Default Argument*/
#include<stdio.h>
void F1(int, float, char *Sem="Second");
// Function Prototype 
int main()
{
 printf("\nUsing default argument");
 F1(218, 75.5);  // using default argument

 printf("\nChanging default argument");
 F1(318, 76,"Third" ); // changing default argument
 return 10;
}
void F1(int R, float M, char *Sem )
{
printf("\nRoll : %d", R);
printf("\nMarks: %.2f", M);
printf("\nSemester : %s", Sem);
}
