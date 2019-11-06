/* CP06_25.C */
/* Program to display a pyramid. */
#include<stdio.h>
#include<conio.h>
main()
{
 int i, j, m, n;
 printf("How many rows in the pyramid ? ");
 scanf("%d", &n);
 for(i=1; i<=n; i++)
  {
   for(j=1; j<=(n-i); j++)
   {
    printf("    ");
   }
  m = i;
  for(j=1; j<=i; j++)
   {
    printf("%4d", m++);
   } 

  m = m-2;
  for(j=1; j<i; j++)
  {
   printf("%4d", m--);
  }
 printf("\n");

 }  // end of outer for

getch();
}
