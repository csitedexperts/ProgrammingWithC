/*	CP06_08.C	*/
/*	Example switch Statement */
#include<stdio.h>
#include<conio.h>
void main(){
int choice, value;
printf("Convert : \n");
printf("\t1: Decimal to Octal   \n");
printf("\t2: Decimal to Hexadec \n");
printf("\t3: Octal   to Decimal \n");
printf("\t4: Octal   to Hexadec \n");
printf("\t5: Hexadec to Decimal \n");
printf("\t6: Hexadec to Octal   \n");
printf("\t7: Exit \n");
printf("Enter your choice (1-7): ");
scanf("%d", &choice);
switch(choice){
case 1:   // when choice =1
   printf("Enter a decimal number : ");
   scanf("%d", &value);
   printf("Decimal %d = %o in Octal", value, value);
   break;
case 2:	// when  choice = 2
   printf("Enter a decimal number : ");
   scanf("%d", &value);
   printf("Decimal %d = %x in Hexadecimal", value, value);
   break;
case 3:	// when  choice = 3
   printf("Enter an octal number : ");
   scanf("%o", &value);
   printf("Octal %o = %d in Decimal", value, value);
   break;
case 4:	// when  choice = 4
   printf("Enter an octal number : ");
   scanf("%o", &value);
   printf("Octal %o = %x in Hexadecimal", value, value);
   break;
case 5:	// when  choice = 5
   printf("Enter a Hexadecimal number : ");
   scanf("%x", &value);
   printf("Hexadecimal %x = %d in Decimal", value, value);
   break;
case 6:	// when  choice = 6
   printf("Enter a Hexadecimal number : ");
   scanf("%x", &value);
   printf("Hexadecimal %x = %o in Octal", value, value);
   break;
case 7:	// when  choice = 7
   break;
default:   // when  choice is not between 1 to 7
  printf("\nInvalid choice. ");
 }   // End of switch
printf("\nPress any key to exit ...");
getch();
}   // End of main
