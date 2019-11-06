/*	 CP13_09.C*/
/*A  Sample Linked List Program*/
#include <malloc.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct Student
 {
 char Roll[10];
 char Name[20];
 float Marks;
 struct Student *Next;
 } *Head, *Tail;

void	 Insert();
void	 Display();
void	 Delete();

void  main()
{
  int x=0;
  char ch;
  while(x==0)
  {
  
  printf("\nA Sample Linked List Program.\n\n");
  printf("\n1. Insert a new student");
  printf("\n2. Display all students");
  printf("\n3. Delete an existing studdent");
  printf("\n4. Exit");
  printf("\n\n\n");
  printf("Please Enter Your Choice (1, 2, 3 or, 4) :");
  ch=getch();
  switch(ch){
   case'1': 
	   Insert();
     	   break;
   case'2': 
 	  Display();
        getch();
	  break;
  case'3': 
        Delete();
	  getch();
	  break;
   case'4': 
        x=1;
        break;
	}
   }
 getch();
}

void  Insert()
 {
 struct Student *Sptr;
 Sptr=(struct Student *) malloc(sizeof(struct Student));
 
 printf("\nEnter Record to be Inserted:\n\n");
 printf("\nEnter Roll:");
 scanf("%s",Sptr->Roll);
 printf("\nEnter Name:");
 scanf("%s",Sptr->Name);
 printf("\nEnter Marks:");
 scanf("%f",&Sptr->Marks);

 Sptr->Next=NULL;
 if(!Head)
  {
   Head=Sptr;
   Tail=Sptr;
  }
 else
   {
   Tail->Next=Sptr;
   Tail=Sptr;
   Tail->Next=NULL;
   }
 }

void	 Display()
 {
 int c=0;
 struct Student *Sptr;
 Sptr=Head;
 if(!Sptr)
 printf("n\n\n\tEmpty list....press any key");
 printf("\n\n");
 
 printf("\nContent(s) of the list are as follows \n");
 while(Sptr)
  {
  c++;
  printf("\n%d. %10s%20s%10.2f",c,Sptr->Roll,Sptr->Name,Sptr->Marks);
  Sptr=Sptr->Next;
 }
 printf("\n\n\nPress any key to continue..........");
 }

void  Delete()
 {
 struct Student *Sptr,*Prev;
 char Roll[10];
 
 printf("\nEnter the Roll to be Deleted:");
 scanf("%s",Roll);
 Sptr=Head;
 while(Sptr)
  {
  if(!strcmp(Sptr->Roll,Roll))
   break;
  else
   Prev=Sptr;
   Sptr=Sptr->Next;
  }
 if(Sptr)
   {
   if(Sptr==Head)
   Head=Sptr->Next;
   if(Sptr==Tail)
   {
   Prev->Next=NULL;
   Tail=Prev;
   }
   Prev->Next=Sptr->Next;
   printf("\nThe student with Roll: %s ..is deleted",Roll);
   printf("\n\n\nPress any key to continue.........");
   free(Sptr);
  }
  else
   printf("\nThe student with Roll: %s ..is not found",Roll);
	
 }
