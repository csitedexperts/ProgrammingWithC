/*	   CP08_19.C    	*/
/*	Program to display multiplication table*/
#include<stdio.h>
#include<conio.h>

#define  Row  10
#define  Col  10
void main()
{
int r, c, i, j;
int mul[Row][Col];

printf("\t\t=====================\n");
printf("\t\tMULTIPLICATION TABLE\n    ");
printf("\t\t=====================\n    ");
for(j=1; j<=Col; j++)
 printf("%4d", j);
 printf("\n  ===========================");
 printf("================\n");
  for(i=0; i<Row; i++)
   {
    r = i+1;
    printf("%2d |", r);
     for(j=1; j<=Col; j++)
      {
       c = j;
       mul[i][j] = r*c;
       printf("%4d", mul[i][j]);
      }
    printf("\n");
  }
getch();
}
