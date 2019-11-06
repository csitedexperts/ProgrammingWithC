/*	CP07_47.C	*/
/*	Example of # directive*/
#include<stdio.h>
#include<conio.h>
#define Msg(x, y) printf(#x " to " #y)
void main()
{
Msg(Welcome, C Programming);
}
