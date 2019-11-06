/* 	CP07_34.C	*/
/*	Using Formal & Actual Arguments */
#include<stdio.h>
#include<conio.h>

void F1(char *, int, float );

int main()
{
F1("MASUD", 118, 75.5); 
// "Masud", 118 and 75.5 are Actual Arguments
getch();
return;
}

void F1(char *Name, int Roll, float Marks)
{  		// Name, Roll and marks are Formal Arguments 
printf("\nName : %s", Name);
printf("\nRoll : %d", Roll);
printf("\nMarks: %.2f", Marks);
}
