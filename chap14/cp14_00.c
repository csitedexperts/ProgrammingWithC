/* 	CP14_00.C 	*/
/* 	Stack Operation using Linked List*/

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct stack
    {
     char name[10];
     struct stack *next;
    } *top, *front, *rear;

void  Push();
void  Pop();
void  Display();

void main()
{
 char ch;
 while (ch!='4')
   {
 printf("\n\n*****************MAIN MENU**************\n");
 printf("1. Push   2. Pop   3. Display   4.Quit");
 printf("\n****************************************\n\n");
 printf("Enter your Option (1-4): ");
 scanf(" %c",&ch);
 
 switch(ch)
      {
	case'1': Push(); 	  break;
	case'2': Pop();	  break;	
case'3': Display(); break;
	case'4':
		   printf("\nThank u for running this program...!");
         break;
  	default :
               printf("\nInvalid choise , please try again...");

      }
    }
  }

void Push()
 {
  struct stack *ptr;
  ptr=(struct stack*)malloc(sizeof(struct stack));
  printf("\nEnter a name to push : ");
  scanf("%s",ptr->name);
  ptr->next=top;
  top=ptr;
  printf("\nPush operation has successfull\n");
  return(0);
 }

void Pop()
 {
  char name[10];
  struct stack *ptr;
  if(!top)
   {
    printf("\nStack underflows...");
    return(0);
   }
  else
  {
  strcpy(name,top->name);
  ptr=top;
  top=top->next;
  printf("\n\t %s is deleted.....",name);
  free(ptr);
  }
  printf("\n\Press any key to continue... ");
  return(0);
 }

void Display()
  {
   struct stack *ptr;
   ptr=top;

   if(!ptr)
	printf("\n Stack is empty ...");
   else
   {
   printf("\nThe stack contains \n");
   while(ptr)
     {
       printf("%s \n", ptr->name);
       ptr=ptr->next;
     }
   }
   printf("\n\Press any key to continue... ");
   return(0);
  }
