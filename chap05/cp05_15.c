/*	 CP05_15.C		*/
/*	Testing Associativity of assignment (=) operator  */
#include<stdio.h>
#include<conio.h>
void main(){
 int x, y;
 x = 10;
 y = 15;
 printf("\n x = %d   x+y = %d",x, x=x+y );
 printf("\n x = %d   x<y = %d",x, x=x<y );
 getch();
}
