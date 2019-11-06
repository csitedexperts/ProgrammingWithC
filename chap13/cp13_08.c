/*	CP13_08.C		*/
/*	Example of Simple Linear Linked List*/
#include <malloc.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>

struct Student
 {
 int  Roll;
 char Name[20];
 float Marks;
 struct Student *Next;
 } *Head, *Tail;

void  main()
{
 struct Student *Sptr;
 char ch;
 int c=0;
 while((ch !='N')&&(ch!='n'))
 {
  Sptr=(struct Student *) malloc(sizeof(struct Student));
 
  printf("\nEnter Record to be inserted:");
  printf("Enter Roll:");
  scanf("%d",&Sptr->Roll);
  printf("Enter Name:");
  scanf("%s",Sptr->Name);
  printf("Enter Marks:");
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
  printf("\n\nInsert one more?[n/N for no]:");
  ch= getch();
  }
  Sptr=Head;
  if(!Sptr)
  printf("n\n\n\tEmpty list....press any key");
  printf("\n\n");
  
  printf("\nContent(s) of the list are as follows:\n");
  while(Sptr)
  {
  ++c;
  printf("\n%d.%5d%20s%10.2f",c,Sptr->Roll,Sptr->Name,Sptr->Marks);
 Sptr=Sptr->Next;
 }
 getch();
}
