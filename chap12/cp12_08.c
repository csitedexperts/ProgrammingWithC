/*  CP12_08.C	*/
/*  fprintf() & fscanf() Example	*/
#include<stdio.h>
#include<conio.h>

void main()
{
int  Roll[3]={101, 102,103};
int i;
char *Name[3]={"Masud", "Monira", "Monirul"};
float Marks[3]={45.50, 66, 77 };

FILE *fp;
char *fn;
printf("\nEnter a file name: ");
scanf("%s", fn);
fp = fopen(fn, "ab+");

for(i=0; i<3; i++)
{
fprintf(fp,"%10d  %10s  %5.2f\n",Roll[i],Name[i],Marks[i]);
}

fclose(fp);
fp = fopen(fn, "ab+");
printf("\n Roll      Name    Marks");
printf("\n ~~~~      ~~~~    ~~~~~");

while(fscanf(fp,"%d  %s  %f", &Roll, Name, &Marks) !=EOF);
{
printf("\n%5d  %10s  %5.2f\n", Roll, Name, Marks);
}
getch();
}
