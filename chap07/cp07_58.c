/* CP07_58.C	*/
/*	Use of pascal modifier */
#include<stdio.h>
#include<conio.h>

void pascal  F1(char *, int, float );

int main()
{
F1("MASUD", 118, 75.5); 
getch();
return;
}

void pascal F1(char *Name, int Roll, float Marks)
{  
printf("Name : %s\n", Name);
printf("Roll : %d\n", Roll);
printf("Marks: %.2f", Marks);
}
