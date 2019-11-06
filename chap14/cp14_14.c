/* 	CP14_14.C 	*/
/* 	Queue Operation using Linear Array*/

#include <stdio.h>
#include <conio.h>

#define SIZE 10

int Q[SIZE];
int N;
int front, rear;

void Insert();
void Delete() ;
void Display() ;

void main()
 {
 char ch;
 front=-1;
 rear=0;
 N=0;
 
 while (ch!='4')
 {
 printf("\n\n*****************MAIN MENU**************\n");
 printf("1. Insert   2. Delete   3. Display   4.Quit");
 printf("\n****************************************\n\n");
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
  int data;
  printf("Enter a data to insert : ");
  scanf("%d", &data);

  if (N<SIZE)
  {
   front++;
  if (front==SIZE)
    front=0;
  Q[front]=data;
  N++;
  printf("\n%d is inserted into the queue");
  }

 else
  printf("\nQueue is full, cann't insert");

 printf("\nPress any key to continue... ");
}

void Delete()
{
  if (N>=0)
  {
   printf("Deleting %d\n", Q[rear]);
   rear++;
   if (rear==SIZE)
    rear=0;
   N--;
  }
  else
   printf("\nQueue is empty...");

 printf("\nPress any key to continue... ");
}


void Display()
{
 int i;
 printf("Queue contains : ");
 if(rear<front)
  {
 for(i=rear;i<=front;i++)
  printf("%d ",Q[i]);
  }
 else if(rear>front)
 {
 for(i=rear;i<SIZE;i++);
  printf("%d ",Q[i]);
 for(i=0;i<front;i++)
  printf("%d ",Q[i]);
 }
 else
   printf("Queue is empty.");

 printf("\nPress any key to continue... ");
}
