/* 	CP15_28.C	*/
/* Playing Rabindra Samgit   */
/*  	Please use DOS based TC compiler */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>

void off()
{
 nosound();
 delay(30);
}

void main()
{
int freq,dur;
FILE *fp;
clrscr();
printf("\nPlaying Rabindra Samgit....\n ");
fp=fopen("rabindra.txt","r");
if (fp==NULL)
{
 puts("Cannot open file");
 getch();
 exit(0);
}
while(fscanf(fp,"%d %d",&freq,&dur)!=EOF)
{
sound(freq);
delay(dur);
off();
}
fclose(fp);
}
