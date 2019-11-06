/*	CP06_09.C	*/
/*	Example of switch Statement*/
#include<stdio.h>
void main()
{
char ch;
printf("Enter A, a, B or b : ");
scanf("%c", &ch);
switch(ch)
{
case 'A':	// When x = A
   printf("\nYou have entered A");
   break;
case 'a':	// When x = a
   printf("\nYou have entered a");
   break;
case 66:	// When x = B
   printf("\nYou have entered B");
   break;
case 'b':	// When x = b
   printf("\nYou have entered b");
   break;
default:
  printf("\nYou have not entered A, a, B or b.");
  }   // End of switch
}   // End of main
