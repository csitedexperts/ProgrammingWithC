/*	CP06_42.C	*/
/*	Example of continue control Statement*/
#include<stdio.h>
#include<conio.h>

void main()
{
int x;

for( ; ; )
   {
    printf("\nEnter a positive integer: ");
    scanf("%d", &x);

      if(x<=0)
       continue;
      else
       break;
    }   // End of for

 printf("\n You have entered %d", x);
 getch();

}   // End of main
