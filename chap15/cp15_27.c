/* 	CP15_27.C	*/
/* Playing Rabindra Samgit   */
/*  	Please use DOS based TC compiler */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

int frec[]={

575,  767,   683,  767,  767,  767,  767,  683,  767,  683,  767,  683, 
642,  642,   683,  575,  642,  642,  683,  683,  767,  767,  642,  575,
575,  512,   767,  862,  767,  862,  862,  575,  642,  642,  683,  767, 

642,  683,   575,  575,  512,  767,  767,  862, 1024, 1024, 1024, 1024, 
1024, 964,   862,  767,  862, 1024, 1024, 1024, 1149, 1149, 1149, 1024, 
1149,1024,  1149, 1024, 1149, 1290, 1149, 1024,  964,  862,  767,  767, 

862,  767,   862,  862,  575,  642,  642,  683,  767,  642,  683,  575,  575,  512,   767,  767,  862, 1024,  1024, 1024, 1024, 1024, 1024, 964, 862,  767,   862, 1024, 1024,  1024, 1024, 1149, 1149, 1024, 1149,1024, 

1149, 1024, 1149, 1290, 1149, 1024, 964, 862, 767, 767, 767, 862, 767,   862,   862,  862,  575,  757,  642, 642, 683, 683, 767, 767, 642, 642, 642,   683,  575,  575,  512 };

int wait[]={

1200, 600,  600,  600, 600,  600,  600,  600, 600, 600,  600,  600,
600,  600,  600, 1200, 600,  600,  600,  600, 600, 600, 1200,  600,
600, 1800, 1200,  600, 600, 1200, 1200, 1200, 600, 600, 1200, 1200, 

600,  600,  600,  600,1800,  600,  600,  600, 600, 600,  600, 1200, 600,  600,  600,  600, 600,  600, 1200,  600, 600, 600,  600,  600, 600,  600,  600,  600, 600,  600,  600,  600, 600, 600,  600, 1200,

600,  600, 1200, 1200,1200,  600,  600, 1200,1200, 600,  600,  600, 
600, 1800,  600,  600, 600,  600,  600,  600, 600, 600,  600,  600,
600,  600,  600,  600,1200,  600,  600,  600, 600, 600,  600,  600, 

600,  600,  600,  600, 600,  600,  600,  600, 600, 600,  600,  600, 600,  600,  600, 1200, 600,  600,  600,  600, 600, 600,  600,  600,  600,  600,  600,  600, 600,  600 };

void off()
{
 nosound();
 delay(30);
}


void main()
{
int i;
clrscr();
printf("Playing Rabindra Samgit...");
for(i=0; i<48; i++)
{
sound(frec[i]);
delay(wait[i]);
off();
}
getch();
}
