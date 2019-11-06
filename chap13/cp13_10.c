/*	 CP13_10.C	*/
/* A program to create a linked list that inserts items after or before a given key and deletes item from it. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

/*structure declaration. */
struct link
 {
   int info;
   struct link *next;
 };
typedef struct link node;
node *start,*back,*temp,*temp1;

/* Function for creation alinked list. */
void create()
{	
  int i,n;
  start=(node*)malloc(sizeof(node));
  start->info=0;
  start->next=(node*)malloc(sizeof(node));
  temp=start->next;
  printf("How many data do you want to input?");
  scanf("%d",&n);
  printf("\nEnter the value %d:",1);
  scanf("%d",&temp->info);
  for(i=0;i<n-1;i++)
  {
   temp->next=(node*)malloc(sizeof(node));
   temp=temp->next;
   printf("\nEnter the value %d:",i+2);
   scanf("%d",&temp->info);
  }
  temp->next=NULL;
 }

/* Funtion for showing the contents of the linked list.*/
void show()
 {
  printf("\nThe list contains the following data:\n");
  temp=start->next;
  while(temp)
   {
   printf("%d\n",temp->info);
   temp=temp->next;  
   }
 }

/* Function for insert items after a given key node.*/
void insafter(void)
  {
   int z;
   temp=start;
   printf("\nEnter the value after which it is to be inserted:");
   scanf("%d",&z);
   while(temp->next!=NULL && temp->info!=z)
     {
	temp=temp->next;}
	if(temp->info==z)
	 {
  	  temp1=temp->next;
	  temp->next=(node*)malloc(sizeof(node));
	  printf("\nEnter new value:");
	  scanf("%d",&temp->next->info);
	  temp->next->next=temp1;
	  }
	else
	 printf("\n Sorry,Your entry is not present!");

  }

/* Function for insert items before a given key node.*/
void insbefore(void)
  {
  int z;
  temp=start;
  printf("\nEnter the value before which it is to be inserted:");
  scanf("%d",&z);
  while(temp->next!=NULL && temp->info!=z)
    {	
 	back=temp;
	temp=temp->next;}
	if(temp->info==z)
      {
       temp1=back->next;
	  back->next=(node*)malloc(sizeof(node));
	  printf("\nEnter new value:");
	  scanf("%d",&back->next->info);
	  back->next->next=temp1;
	 }
   else
    printf("\n Sorry,Your entry is not present!");
  }

/* Funtcion  for delete items from linked list.*/
void del()
{
  int z;
  printf("\n Enter the value  which you want to be deleted:");
 scanf("%d",&z); temp=start;
 while(temp->next!=NULL && temp->info!=z)
   {
   back=temp;
   temp=temp->next;}
   if(temp->info==z)
    {
     back->next=back->next->next;
     }
  else
    printf("\n Sorry,Your entry is not present!");

  }

/**********Main function of the program************/
main()
{
  int option;
  clrscr();
   do{
     printf("\n\t");
     printf("------MAIN MENU------\n\t");
     printf("1.CREATE\n\t");
     printf("2.INSERT ITEMS AFTER \n\t");
     printf("3.INSERT ITEMS BEFORE\n\t");
     printf("4.DELETE\n\t");printf("5.SHOW\n\t");
     printf("6.QUIT\n\t");
     printf("Input your option(1-6):" );
     scanf("%d",&option);
     printf("\n");
   switch(option)
     {
	case 1: create();break;
	case 2: insafter();break;
	case 3: insbefore(); break;
	case 4: del();  break;
	case 5: show();break;
	}
  }while(option!=6);

return 0;
}
