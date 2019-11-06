/* 	CP14_13.C 	*/
/* 	Stack Operation using Linear Array*/
#include<stdio.h>
#include<conio.h>
#define  N   100

int stack[N],top=0,i;
void Push();
void Pop();
void Display();

int main()
{
 char ch;
 while (ch!='4')
 {
  printf("\n\n*******************MAIN MENU******************\n");
  printf("1. Push      2. Pop     3. Display     4.Quit");
  printf("\n**********************************************\n\n");

  printf("Enter your Option (1-4): ");
  scanf(" %c",&ch);
   switch(ch)
    {
   case '1': Push(); 	break;
   case '2': Pop();  	break;
   case '3': Display(); break;
   case '4':
   		 printf("\nThank u for running this program...!");
       break;
   default :
  	 printf("\nInvalid choise , please try again...");
  }

 }

return 0;
}

void Push()
{
 if (top<N)
 {
  printf("\nPlease enter your data : ");
  scanf("%d",&stack[top]);
  top++;
  printf("\nPush operation has successfull");
 }
 else
  printf("\nSorry! stack is overflow...");
  return ;
 }

void Pop()
 {
  if(top==0)
   printf("\nSorry! stack is empty...");
  else
  {
  top=top-1;
  printf("\nPop operation has successfull delete  %d",stack[top]);
 }
return; 
}

void Display()
 {
  for(i=top-1;i>=0;--i)
  printf("\nstack[%d]: %d",i+1,stack[i]);
  return;
}
