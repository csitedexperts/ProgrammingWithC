/*    CP16_56.C	 */
/* Displaying Button Status and Pointer Position */
#include<stdio.h>
#include<dos.h>
#include<graphics.h>

int InitMouse();
void ShowPointer();
void MouseInfo( int*, int*, int*);

int main()
{
 int XPos, YPos, ButtonStatus;
 int BMode = 0;

 int gdriver=DETECT, gmode, errorcode; /*request auto detection*/

 /* Graphics initialization  */
 initgraph(&gdriver, &gmode, "c:\\tc\\bgi");

 errorcode=graphresult();

 if(errorcode!=grOk)  /* if error */
  {
  printf("Graphics ERROR:%s \n", grapherrormsg(errorcode));
  printf("Press any key to exit \n");
  getch();
  exit(1);
  }

 if(InitMouse()==0)
 {
  if(BMode == 1)
  {
   closegraph();
   restorecrtmode();
  }
  printf("Mouse/Mouse Driver not found \n");
  exit(1);
 }

ShowPointer();  /* Call ShowPointer() */

gotoxy(1,1);
printf("A mouse interfacing program \n");
gotoxy(1,4);
printf("Mouse Pointer is at : (   ,   )");
gotoxy(1,6);
printf("LEFT Button is   :");
gotoxy(1,7);
printf("RIGHT Button is  :");
gotoxy(1,10);
printf("Press any key to exit...");


do {
 MouseInfo(&ButtonStatus, &XPos, &YPos);   /* Call MouseInfo() */

 gotoxy(24,4);
 printf("%3d", XPos );   /* x position */
 gotoxy(28,4);
 printf("%3d", YPos );   /* y position */

 gotoxy(20,6);
 if((ButtonStatus & 1)==1)   /* If pressed LEFT button */
  printf(" DOWN ");
 else
  printf("  UP  ");

  gotoxy(20,7);
  if((ButtonStatus & 2)==2)  /* If presed RIGHT button */
   printf(" DOWN ");
  else
   printf("  UP  ");
 }while(!kbhit());  // Untill presing any key

return ;
}

/* checking  mouse  availability */
int InitMouse()
{
  union REGS inregs, outregs;
  inregs.x.ax=0;
  int86( 0x33, &inregs, &outregs);
   if(outregs.x.ax == 0)
    return(0);
   else
    return(1);
}

/* Displaying mouse pointer */
void ShowPointer()
{
  union REGS inregs, outregs;
  inregs.x.ax=1;
  int86( 0x33, &inregs, &outregs);
}

/* getting mouse info */
void MouseInfo( int* ButtonStatus, int *XPos, int *YPos)
 {
  union REGS inregs,outregs;
  inregs.x.ax=3;
  int86(0x33, &inregs, &outregs);
  *XPos = outregs.x.cx;  // returns x ordinate
  *YPos = outregs.x.dx;  // return y ordinate
  *ButtonStatus = outregs.x.bx;
}
