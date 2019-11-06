/*	CP17_08.CPP	*/
/*	Example of Call by Reference Method*/
#include<stdio.h>
void Result(int &, float &); //Function Prototype
int main(){
int Roll= 101; float Marks=68;
printf("\nInside main() Roll : %d, Marks %.2f", Roll, Marks);
Result(Roll, Marks );
printf("\ntmAfter Calling Result() By Refereence....");
printf("\nInside main() Roll : %d, Marks %.2f", Roll, Marks);
return 1;
}
void Result(int &Roll, float &Marks)
{
Roll = 201; Marks = 74;
printf("\nInside Result() Roll : %d, Marks %.2f", Roll, Marks);
}
