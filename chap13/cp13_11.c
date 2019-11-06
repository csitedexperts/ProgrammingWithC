/*	 CP13_11.CPP	*/
/* A program to create a linked list that inserts items after or before a given key and deletes item from it. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct link
{ int info;
  struct link *back,*forw;
};
typedef struct link node;
node *first;

node *create()
{ 
  node *temp;
  temp=(node*)malloc(sizeof(node));
  temp->back=NULL;temp->forw=NULL;
}
node *search(int item)
 { 
  node *mid;mid=first->forw;
  while(mid!=first)
   {
    if(mid->info==item)
      break;
    mid=mid->forw;
   }
   if(mid!=first)
     return mid;
   else
    return NULL;
}

void insert(node *loc,int item)
 {
  node *mid;
  mid=create();mid->info=item;
  mid->forw=loc->forw;mid->back=loc;
  loc->forw->back=mid;loc->forw=mid;
 }
void traverse_forw()
 {
  node *mid;mid=first->forw; printf("\n\t");
  while(mid!=first)
   {
    printf("%d\n\t",mid->info);mid=mid->forw; 
   }
  printf("\n");
}
void traverse_backw()
{ 
  node *mid;
  mid=first->back; printf("\n\t");
  while(mid!=first)
   {
     printf("%d\n\t",mid->info);mid=mid->back;
   }
  printf("\n");
}

void del(node *loc)
 {  
  loc->back->forw=loc->forw;
  loc->forw->back=loc->back;
  free(loc);
 }

void link()
{
  node *mid;char choice;int item;
  mid=first;
  do{
	printf("Enter your data:");
	scanf("%d%*c",&item);insert(mid,item);mid=mid->forw;
	printf("Another one(y/n)?"); scanf("%c%*c",&choice);
     }while(choice=='y');
}

/* Main function of the program */

main()
{
 int option,value,item;
  node *mid;
  clrscr();
  first=create();
  first->forw=first;first->back=first;
  link();

  do{
printf("\n\t");
     printf("--------MENU--------\n\t");
printf("1.SHOW THE LIST IN FORW DIRECTION\n\t");
     printf("2.SHOW THE LIST IN BACKW DIRECTION\n\t");
     printf("3.SEARCH\n\t");
     printf("4.DELETE\n\t");
     printf("5.INSERT\n\t");
     printf("6.QUIT\n\t");
     
     printf("Input your option(1-6):" );
     scanf("%d",&option);
     printf("\n");
     switch(option)
      {
     case 1: traverse_forw();break;
     case 2: traverse_backw();break;
     case 3: printf("Enter item to search:");
     scanf("%d",&value);
	if(search(value)!=NULL)
  printf("value has been found\n");
	else
	 printf("Not found\n");
	  break;
     case 4:
	  printf("Enter item to delete:");
	  scanf("%d",&value);
	  mid=search(value);
	  if(mid!=NULL)
        {
	   del(mid);
	   printf("node has been deleted\n");
	   }
 	else
	   printf("item not found\n");
	   break;
      
case 5:
	   printf("Enter item to insert after:" );
	   scanf("%d",&item);
	   printf("Enter item to insert:");
	   scanf("%d",&value);
	   mid=search(item);
	   if(mid!=NULL)
        {
         insert(mid,value);
	   printf("Node has been inserted\n");}
	   else
	   printf("Item not found\n");
        break;
	  }
    }while(option!=6);
  getch();
}
