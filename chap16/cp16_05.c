/*    CP16_05.C	 */
/* Cursor Program in Video mode  */
/* Please use TC-DOS Compiler */

# include <stdio.h>
# include <conio.h>
# include <dos.h>

Setcur( int ssl, int esl )
{
 union REGS inregs, outregs ;
 inregs.h.ah = 1 ;  // service number
 inregs.h.ch = ssl ;  // starting scan line
 inregs.h.cl = esl ;  // ending scan line
 inregs.h.bh = 0 ;  // video page number
 // issue interrupt for changing the cursor size
 int86(16, &inregs, &outregs ) ;
 return 0;
}

int main()
{
  clrscr();
  Setcur(32, 0) ;  // hide cursor
  printf("Press any key to bring cursor: ") ;
  getch();
  Setcur(6, 7) ;  // display cursor
  printf("\nPress any key to hide cursor: ") ;
  getch();
  Setcur(32, 0) ;  // hide cursor
  printf("\nPress any key to bring cursor: ") ;
  getch();
  Setcur(6, 7) ;  // display cursor
  printf("\nPress any key to exit.") ;
  getch();

  return ;

}
