/*	   CP08_14.C    	*/
/*	Program to convert positive integer form one type number system to another type*/
#include<stdio.h>
#include<conio.h>
void main()
{
static char Base16[16] ={'0','1','2','3','4',\
'5','6','7','8','9','A','B', 'C','D','E','F'};
long NumtoConvert;
long ConvertedNum[64];
long OriginalNum;
int Index, Base, NextDigit;
Index =0; 
printf("\nEnter a Decimal Number to be Converted: ");
scanf("%ld", &NumtoConvert );
OriginalNum= NumtoConvert;
BB:
 printf("\nEnter Base for Conversion (2 or 8 or 10 or 16): ");
 scanf("%d", &Base);
 if ((Base!=2)&&(Base!=8)&&(Base!=10)&&(Base!=16))
goto BB;
 while(NumtoConvert !=0)
 {
 ConvertedNum[Index]= NumtoConvert % Base;
 ++Index;
 NumtoConvert = NumtoConvert/Base;
 }
Index = Index-1;

printf("\nThe Equivalent Number in Base %d is: ", Base);
 while(Index>=0)
 {
 NextDigit=ConvertedNum[Index];
 printf("%c", Base16[NextDigit]);
 --Index;
 }
printf("\n");
getch();
}
