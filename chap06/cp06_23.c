/* CP06_23.C */
/* Another Example of for Statement */
#include<stdio.h>
#include<conio.h>
main()
 {
 int i=0, j=0; 
 for (i=5; i>=1; i--) // outer for
  {
   for (j=1; j<=i; j++) // inner for
   {
   printf("%4d", j);
   }   // End of inner for
  printf("\n");
  }  // End of outer for

 }  // End of main()
