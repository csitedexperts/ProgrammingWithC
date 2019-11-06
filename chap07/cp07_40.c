/*    CP07_40.C       */
/*	Command line Argumented Function */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
int i;
for(i=1; i<argc; i++)

if(system(argv[i]))
 {
  printf("%s failed \n", argv[i]);
  return -1;   /* failure code */
 }

return 0;
}
