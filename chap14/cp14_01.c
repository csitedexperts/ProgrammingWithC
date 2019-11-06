/*	CP14_01.C		*/
/*  Program to display and count total elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
int Roll[5]={101,102,105,106,107};
int i,count=0,LB=0,UB=5;
printf("\nThe array contains.....\n");
for(i=LB;i<UB;i++)
{
printf("%d \t ",Roll[i]);
count++;
}
printf("\nNumber of elements = %d",count);
getch();
}
