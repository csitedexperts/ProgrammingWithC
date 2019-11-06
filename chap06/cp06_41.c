/*	CP06_41.C	*/
/*	 Example of do loop Statement*/
#include<stdio.h>
#include<conio.h>

void main()
{
char ch=65;
do
{
 printf("%c ", ch);
 ch++;
 }while((ch >= 'A') && (ch <= 'Z'));
getch();
}   // End of main
