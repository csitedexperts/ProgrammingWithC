/*    CP07_57.C	 */
/*	Use of asm modifier */
#include<stdio.h>
#include<conio.h>

void newline()
{
  asm {
  mov ah, 02h 
  mov dl, 0Ah
  int 21h
 }
}  /* End of function */

main()
{
 printf("This is a line ");
 newline();
 printf("This is another line ");
 getch();

}
