/* CP04_18.C	*/
/* Variable's Output in various formats  */
#include<stdio.h>  
#include<conio.h>  
main()
{	
 int n;
 printf("Enter a hexadecimal number : ");
 scanf("%x", &n);
 printf("\nYou have entered : %i (in decimal format)", n);
 printf("\nYou have entered : %o (in octal format)", n);
 printf("\nYou have entered : %x (in hexadecimal format)", n);
 getch();
}
