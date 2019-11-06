/*	 CP10_18.C	*/
/* Finding No. of vioel, consonent, digit, blankspaces, special characters etc. of a line of text  */
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>

void scan_line(char line[],int *v,int *c,int *d,int *w,int *o)
 {
  char ch;
  int count=0;

  while((ch=toupper(line[count]))!='\0')
   {
    if(ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U')
    ++*v;
    else
     if(ch>='A'&& ch<='Z')
     ++*c;
    else if(ch>='0'&& ch<='9')
	++*d;
    else if(ch==' '|| ch=='\t')
	++*w;
    else
	++*o;
     ++count;
   }
   return;
  }

void main()
 {
  char line[40];
  int v=0,d=0,w=0,o=0;
  int c=0;
  printf("\nEnter a line of text : \n");
  scanf("%[^\n]",line);
  scan_line(line,&v,&c,&d,&w,&o);
  printf("\nNo. of Vioel     = %d",v);
  printf("\nNo. of Consonent = %d",c);
  printf("\nNo. of Digit     = %d",d);
  printf("\nNo. of Blankspace= %d",w);
  printf("\nNo. of Other     = %d",o);
  getch();
 }
