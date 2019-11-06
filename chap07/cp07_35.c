/* 	CP07_35.C	*/
/*	Exemplify of Argumented Function Call */
#include<stdio.h>
#include<conio.h>
int Total(int V1, int V2)
{
 int Total = V1 + V2;
 return(Total);
}
int main()
{
 int SubTotal, GTotal;
 printf("Enter SubTotal : ");
 scanf("%d", &SubTotal);

 GTotal = SubTotal + Total(30, 50);
 printf("Grand Total : %d", GTotal);
 getch();
 return 0;
}
