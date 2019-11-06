/*	 CP10_10.C	*/
/* Using scanf() with advanced specifier  */
#include<stdio.h>
int main()
{
char   Name[50];
printf("Enter Your Name : ");
scanf("%[^\n]", Name);  // gets untill press ENTER
printf("\nDear %s! Congratulation to you.", Name);

getch();
return 0;
}
