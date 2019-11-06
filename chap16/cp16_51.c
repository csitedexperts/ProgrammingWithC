/*    CP16_51.C	 */
/* 	Another Keyboard interfacing example  */
#include<stdio.h>
#include<conio.h>
#include<dos.h>

int main()
{
 union REGS inregs, outregs;
 char ch;
 do{
  for(ch='A'; ch<='Z'; ch++)
   {
    inregs.h.ah=0x2; // service call 
    inregs.h.dl=ch;  // ch to dl
    int86(0x21, &inregs, &outregs); // dispaly character
   // printf("%c", outregs.h.dl); 
   }

  inregs.h.ah=0x2; // service call
  inregs.h.dl=0xA; // 0xA to dl
  int86(0x21, &inregs, &outregs);
  printf("%c", outregs.h.dl);  // create new line
 }while(!kbhit());

 getch();
}
