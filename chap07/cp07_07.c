/*    CP07_07.C	*/
/*	Using clock() and delay()  library functions */
#include <stdio.h>
#include<conio.h>
#include <time.h>
#include <dos.h>

main()
 {
  clock_t start, end;
  start = clock();
  delay(2000);
  end = clock();
  printf("Time delayed : %f seconds",(end-start)/CLK_TCK);
  getch();
  return 0;
 }
