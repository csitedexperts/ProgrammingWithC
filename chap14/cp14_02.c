/*	CP14_02.C		*/
/*  Program to display and count total elements of an array*/
#include<stdio.h>
#include<conio.h>
void main()
{
 int Roll[5]={101, 102, 105, 106, 107};
 int i,count=0,LB=0,UB=5;
 i=LB;
 printf("\n The array contains.....\n");
 while(i<UB)
 {
  printf("%d \t",Roll[i]);
  i++;
  count++;
 }
 printf("\nNnumber of elements = %d",count);
 getch();
}
