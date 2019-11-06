/*	CP06_16.C	*/
/*	Example for loop*/
#include<stdio.h>
#include<conio.h>
void main()
{
int i, N;
long S=0, SS =0;
printf("\nEnter a positive integer : ");
scanf("%d", &N);
printf("1+(1+2)+(1+2+3)+...+(1+2+3+..+%d) = ", N);
for (i=1; i<=N; i++)
   {
    S = S +i;
    SS = SS + S; 	    
   } 
printf("%ld", SS);
getch();
}
