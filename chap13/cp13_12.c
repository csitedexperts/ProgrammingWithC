/*	 CP13_12.C	*/
/* Program to create a linked list, to insert element in the linked list, to delete element(s) from the linked list and to reverse the linked list. */

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream.h>
#include<ctype.h>

typedef struct INFO      /*Global structure definition. */
{
char Name[41];
int  Roll;
int  Age;
int  Marks;
struct INFO *Next;
} node;

/*Global functions declaration. */
void create( node * );
node *insert( node * );
void store_in( node * ); 	/* Assigns values in a node. */
char acrd_to( void );
node *traverse( node *, int Loop );
int node_count(node *);
node *del( node * );
node *srch_roll( node *, int Roll );
node *reverse(node *);
char menu(void);
void display( node * );
void _free(node * );
int readfile(node * );
int savetofile( node* );

void main(void)
{
  node *Header;     /* The root of the list. */
  char Choice;
  //	int Records=0;
  //	char Quit_flag = 0 ;
  Header = NULL;
  Header = (node *) malloc( sizeof( node ));
  if(!(readfile(Header)))
   {
   printf("You must create the list and save it as a\n\
	different filename." ) ;
   Header = NULL;
	}

for( ; ; )//do
	{
	Choice = menu();
	printf("\n\n");
	
   switch( Choice )
	{
   	case '1':	
 	case 'C':
	_free(Header);	/*to re-create the list memory must be freed.*/
	Header = (node *) malloc( sizeof( node ));
	create( Header );
	display( Header );
	break;
	

case '2':	
case 'I':
		Header = insert( Header );
		display( Header );
		break;
	
case '3':	
case 'D':
		Header = del( Header );
		display( Header );
		break;
	case '4':
	case 'R':
		Header = reverse( Header );
		display( Header );
		break;
	case '5':
	case 'S':
		if(savetofile(Header))
		printf("\nRecords successfully saved.");
		break;

	case '6':	
case 'Q':
	 //	Quit_flag = 1;
	printf("\n\n\n\t\t\tThank you to run the program.\n");
	_free( Header );	/* Frees the memory. */
	exit(1);
	break;
	}
	}//while( Quit_flag != 1 );
  }

/* Creation of the linked list.*/
void create( node *Current )
{
   fflush(stdin);
   if( Current != NULL )
  	{
	store_in( Current );
printf("\n\tAnother?(\'Esc\' to end. Any other key to continue.)");
	fflush(stdin);
	if( getch() == 27 )   /*The Next field of the last node*/
	Current->Next = NULL; 	/* node is set to zero. */
 else if((Current->Next=(node *) malloc(sizeof(node)))!=NULL)
 create( Current->Next );	/*Recursive call. */
  }
}

/* Function to insert a node. */
node *insert( node *Current )
  { 
   int Posn, Count;
   node *New;
   node *Hold;
   if( Current == NULL )
   return(Current);
   printf("\n\tInsertion :");
   Count = node_count( Current );
   printf("\n\tPosition to insert?\t");
   scanf("%d",&Posn);
   if( (Posn < 1) || ( Posn > (Count+1)))
	{
	printf("\n\tPosition is not correct. Re-try...");
	printf("\n\tpress any key to continue...");
	getch();
	return(Current);
	}
  else if( (New = (node *)malloc(sizeof(node))) != NULL )
	{
	fflush(stdin);
	store_in(New);
	if( Posn == 1 )
	{
	New->Next = Current;	/* Pointer adjustment for the  */
	Current = New;		/* first position insertion.   */
	}
	else
 	{
	Hold = traverse( Current, Posn ); /*Pointer adjustment for */
	New->Next = Hold->Next; /*insertion at any other */
	Hold->Next = New; /*position except first. */
	}
   }
 return(Current);
}

 /* Function to assign values for each node. */
 void store_in( node *Current )
   {
    printf("\n\tNAME  : ");	
scanf("%[^\n]", Current->Name );
	printf("\tROLL  : ");
scanf("%d", &Current->Roll );
	printf("\tAGE   : ");
scanf("%d", &Current->Age );
	printf("\tMARKS : ");
scanf("%d", &Current->Marks);
}

/*Function determines whether according to position or according to  */
/*roll the deletion operation will be performed. */
char acrd_to( void )
  {
  char Choice;
  printf("Operation according to :\n\t1. (N)ode?\n\t2. (R)oll?\n\t[");
 do{
  Choice = getch();
  }while( !strchr("1Nn2Rr",Choice));
  putch(Choice);	printf("]");
  return(Choice);
}

/*to traverse to the node preceding i-th node for insertion or deletion.*/
 node *traverse( node *Current, int Posn )
  {
   int I;
   for( I=1; (I<Posn-1); I++)
     Current = Current->Next;
   return(Current);
  }

 /*to count the number of nodes.*/
 int node_count(node *Current)
   {
	int Number_of_node = 0 ;
	while( Current != NULL )
	{
	++Number_of_node;
	Current = Current->Next;
	}
	return(Number_of_node);
}

 /*to delete a node.*/
 node *del( node *Current )
  {
  node *del_acrd_rl(node *Current);	
/*Function declaration */
  node *del_acrd_psn(node *Current);
/*Function declaration */
  char Choice;
  if( Current == NULL )
	return(Current);
   printf("\n\tDeletion ");
  Choice = acrd_to();/*Function call.*/

  switch(Choice)
   {
case '2':	
case 'R': 
case 'r':
	Current = del_acrd_rl(Current);	//Function call
	break;
	case '1':
	case 'N':
	case 'n':
	Current = del_acrd_psn(Current); //Function call
	break;
	}
  return(Current);
 }

/* Function to search a roll in the list. If it is found returns the pointer of */
 node *srch_roll( node *Current, int Roll ) 	
{	/*previous node of node that */
/*cointains the roll. */
	if( Current->Next->Roll == Roll )
	return(Current);
	else if( Current->Next->Next == NULL )
	 return(NULL);
	else
  srch_roll( Current->Next, Roll ); /* Recursive call. */
 }

 /* to reverse the list. */
 node *reverse(node *Current)
  {
     node *Temp1;
	node *Temp2;
	if( Current == NULL )
	  return(Current);
	if( Current->Next != NULL )
	{
	 Temp1 = Current;
	 Temp2 = Current->Next->Next ;		
/*Pointer adjustment for the	*/
	Current = Current->Next;
		/*first two nodes.   	*/
	Temp1->Next = NULL;
	Current->Next = Temp1;
	while( Temp2 != NULL )
	{
	Temp1 = Current;	
		/*Pointer adjustment of all other	*/
	Current = Temp2;	
		/* nodes except the first.   	*/
	Temp2 = Temp2->Next;
	Current->Next = Temp1;
	}
   }
  return(Current);
 }

/*to show the program menu. */
char menu(void)
  {
	char  Choice;
	printf("\n\t****************");
	printf("\n\t* 1. (C)reate. *");
	printf("\n\t* 2. (I)nsert. *");
	printf("\n\t* 3. (D)elete. *");
	printf("\n\t* 4. (R)everse.*");
	printf("\n\t* 5. (S)ave.   *");
	printf("\n\t* 6. (Q)uit.   *");
	printf("\n\t****************");
	printf("\n\n\tEnter Choice : ");
	do{
	Choice = toupper(getch());
	}while(!strchr("1C2I3D4R5S6Q",Choice));
	putch(Choice);
	return(Choice);
}

 /*to show the results of the operations. */
 void display( node *Current )
  {
   int Posn=0  ;
    if( Current == NULL )
	{
	printf("\n\tThe list is not existing,");
	printf("\n\tYou must create the List.");
	printf("\n\tPress any key to continue...");
	getch();
	}
	clrscr();

	while( Current != NULL )
	{
	printf("\n\t(%d).", ++Posn);
	printf("\n\t    NAME: %s",  Current->Name);
	printf("\n\t    ROLL: %d",  Current->Roll);
	printf("\n\t    AGE : %d",  Current->Age);
	printf("\n\t    MARKS: %d",  Current->Marks);
	Current = Current->Next;
	if( Posn%4 == 0)
	 {
	  printf("\n\tPress any key to continue...");
	getch();
	clrscr();
	}
     }
	if( Posn%4 != 0 )
	{
	 printf("\n\tPress any key to continue...");
	 getch();
	}
}

/* Function to free the allocated memory. */
 void _free(node *Current)
   {
	node *Free;
	Free = Current;
	while( Free != NULL )
	{
	Current = Current->Next;
	free(Free);
	Free = Current;
	}
 }

/* Function to delete node according to roll. */
node *del_acrd_rl(node *Current)
  {
   int Node_roll;
   node *Temp;
   node *Free;
   printf("\n\tEnter the Roll no. of the node to delete :");
   scanf("%d",&Node_roll);
   if( Current->Roll == Node_roll )
	{
	Free = Current;	/*Pointer adjustment for the */
	Current = Current->Next;	/*first node deletion. */
	free(Free);
	}
	else
	{
	Temp = srch_roll(Current, Node_roll); /*Function call.*/
	if( Temp == NULL )
	{
	printf("\n\tMatch not found - Retry.. ");
	printf("\n\tPress any key to continue...");
	getch();
	}
	else
	{
	Free = Temp->Next;/*Pointer adjustment for */
	Temp->Next = Temp->Next->Next; /*deletion of a node */
	free(Free);         	/*except the first.  	*/
	}
    }
  return(Current);
 }

/* Function to delete according to position. */
node *del_acrd_psn(node *Current)
   {
    int Posn, Count;
    node *Temp, *Free;
    
    printf("\n\tPosition of the Node to delete?  ");
    scanf("%d",&Posn);
    Count = node_count( Current );	/*Function call.*/
    if( ( Posn < 1 ) || ( Posn > Count ))
	{
	 printf("\n\tPosition is not correct. Re-try...");
	 printf("\n\tPress any key to continue...");
	 getch();
	}
    else if( Posn == 1 )
	{
	Free = Current;	/*Pointer adjustment for the */
	Current = Current->Next;	/*first node deletion */
		free(Free);
	}
	else{
 	Temp = traverse( Current, Posn );/*Function call.*/
	Free = Temp->Next;	/*Pointer adjustment for */
	Temp->Next = Temp->Next->Next;  	/*deletion of a node */
	free(Free);     /*except the first.   	*/
	}
  return(Current);
}

/* Function to save the list in a file.*/
int savetofile( node* Current )
 {
    FILE *Write;
    int Count=0;

	if( Current == NULL )
	{
	printf("The list is not existing");
	return 0;
	}

	if( ( Write = fopen("list", "wb")) == NULL)
	{
        printf("Write error--opening file.");
	return 0;
	}

	struct{
	char Name[41];
	int  Roll;
	int  Age;
	int  Marks;
	} Record ;

	while( Current != NULL )
	{
	strcpy(Record.Name, Current->Name);
	Record.Roll = Current->Roll;
	Record.Age  = Current->Age;
	Record.Marks = Current->Marks;
	fwrite( &Record, sizeof(Record), 1, Write);
	Count++;
	Current = Current->Next;
	}
	return Count;
 }

int readfile(node *Current)
  { 
	FILE *Read;
	int Count=0;

	if(( Read = fopen("list", "rb")) == NULL)
	{
	printf("Read error--opening file.");
	return 0;
	}

	struct{
	char Name[41];
	int  Roll;
	int  Age;
	int  Marks;

	} Record ;

	while(!feof(Read))
	{
	fread(&Record, sizeof(Record), 1,Read );
	if(Current!=NULL)
	{
 	 strcpy(Current->Name, Record.Name);
	 Current->Roll=Record.Roll;
	 Current->Age=Record.Age;
	 Current->Marks=Record.Marks;
	 Count++;
	 Current->Next=(node *)malloc(sizeof(node));
	 Current=Current->Next;
	}
	else
	 break;
	}
    Current=NULL;
  return (Count);
}
