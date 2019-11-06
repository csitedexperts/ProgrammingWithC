/* 	CP14_15.C 	*/
/* 	Queue Operation using Linked List */

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

struct node
  {
    char name[10];
    struct node *next;
  } *top, *front, *rear;

void  Insert();
void  Delete();
void  Display();

void main()
 {
 char ch;
 while (ch!='4')
 {
 printf("\n\n******************MAIN MENU****************\n");
 printf("1. Insert   2. Delete   3. Display   4.Quit");
 printf("\n********************************************\n\n");
 printf("Enter your Option (1-4): ");
 scanf(" %c",&ch);
  
 switch(ch)
      {
	case'1': Insert();	break;
	case'2': Delete();	break;
	case'3': Display();	break;
	case'4':
	   printf("\nThank u for running this program...!");
      	   break;
default :
    	   printf("\nInvalid choise , please try again...");

      }
    }
  }

void Insert()
  {
   struct node *ptr;
   ptr=(struct node*)malloc(sizeof(struct node));
   printf("\nEnter name to insert : ");
   scanf("%s",ptr->name);
   if(!front)
	{
	  front=ptr;
	  ptr->next=front;
	}
   else
	{
	 ptr->next=front;
	 rear->next=ptr;
	}
    rear=ptr;
   printf("\nInsertion operation has successfull\n");
    return(0);
   }

void Delete()
   {
    char name[10];
    struct node *ptr;
    if(!front)
	  printf("\nQueue underflows....");
  else
    {
    strcpy(name,front->name);
    ptr=front;
    if(front==rear)
	front=rear=NULL;
    else
       {
       front=front->next;
       rear->next=front;
       }
   free(ptr);
   printf("\n%s is deleted.....",name);
   }
   printf("\nPress any key to continue... ");
    return(0);
   }

void Display()
   {
   struct node *ptr;
   ptr=front;
   if(ptr==NULL)
     {
      printf("\nQueue underflows...");
    
     }
   else
   {
    if(!ptr)
	printf("\nQueue is empty..");
   else
   {
    printf("\nThe queue contains :  \n");
    while(1)
     {
	printf("\n %s",ptr->name);
	ptr=ptr->next;
	if(ptr==front)
		break;
     }
    }

   }
    printf("\nPress any key to continue... ");
    return(0);
  }
