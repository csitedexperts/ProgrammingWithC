/*	CP07_22.C	*/
/* Conversion of number to Words  */

#include<stdio.h>
#include<conio.h>

long number;
int renum;

int Find(int);   // Function Prototype
int Say(int);   // Function Prototype

void main()
{
printf("Enter your number : ");
scanf("%ld",&number);

if(number>=10000000)
{
 renum=number/10000000;
 Find(renum);
 printf("Crore ");
 number=number%10000000;
}
if(number>=100000)
{
 renum=number/100000;
 Find(renum);
 printf("Lac ");
 number=number%100000;
}

if((number>=1000) && (number<100000))
{
 renum=number/1000;
 Find(renum);
 printf("Thousand ");
 number=number%1000;
}

if((number>=100) && (number<1000))
{
 renum=number/100;
 Find(renum);
 printf("Hundred ");
 number=number%100;
}

if(number<100)
 Find(number);

getch();
}

int Find(int renum)
{
if ((renum>=0) && (renum<=19))
Say(renum);

if ((renum>=20) && (renum<=29))
{
printf(" Twenty");
renum=renum%20;
Say(renum);
}

if ((renum>=30) && (renum<=39))
{
printf(" Thirty");
renum=renum%30;
Say(renum);
}

if ((renum>=40) && (renum<=49))
{
printf(" Forty");
renum=renum%40;
Say(renum);
}

if ((renum>=50) && (renum<=59))
{
printf(" Fifty");
renum=renum%50;
Say(renum);
}

if ((renum>=60) && (renum<=69))
{
printf(" Sixty");
renum=renum%60;
Say(renum);
}

if ((renum>=70) && (renum<=79))
{
printf(" Seventy");
renum=renum%70;
Say(renum);
}

if ((renum>=80) && (renum<=89))
{
printf(" Eighty");
renum=renum%80;
Say(renum);
}

if ((renum>=90) && (renum<=99))
{
printf(" Ninety");
renum=renum%90;
Say(renum);
}
return(renum);
}

int Say(int renum)
{
switch(renum)
{
case 0:  break;
case 1:  printf(" One ");break;
case 2:  printf(" Two ");break;
case 3:  printf(" Three ");break;
case 4:  printf(" Four ");break;
case 5:  printf(" Five ");break;
case 6:  printf(" Six ");break;
case 7:  printf(" Seven ");break;
case 8:  printf(" Eight ");break;
case 9:  printf(" Nine ");break;
case 10: printf(" Ten ");break;
case 11: printf(" Eleven ");break;
case 12: printf(" Twelve ");break;
case 13: printf(" Thirteen ");break;
case 14: printf(" Fourteen ");break;
case 15: printf(" Fifteen ");break;
case 16: printf(" Sixteen ");break;
case 17: printf(" Seventeen ");break;
case 18: printf(" Eighteen ");break;
case 19: printf(" Nineteen ");break;
}

return(renum);
}
