/*	CP06_38.C	*/
/* Infinite while loop  */  
#include<stdio.h>
#include<conio.h>
void main(){
int x = 1;
clrscr();
while(x){
  printf("Press any key to exit ....\n");
  delay(100);
  if (kbhit())  
    x = 0; // or, exit(0);  /* If any key is pressed, then exit */ 
  }
 getch();
}
