/*	   CP08_24.C    	*/
/*	Assigning less array elements than ArraySize*/
#include<stdio.h>
#include<conio.h>
float Passed(float, float, float);
void main()
{
float Marks[5]={50, 20, 60.5 , 12, 40.5}; 
// 20 and 12 are not passed

float TMarks;
TMarks =  Passed(Marks[0], Marks[2], Marks[4]);
printf("\nTotal Marks Passed =%.2f", TMarks);
getch();
}
float Passed(float M1, float M2, float M3)
{
float Total;
Total = M1 + M2 + M3;
return Total;
}
