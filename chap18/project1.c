/*      Project1.C	*/
/*	A Students Database Project*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#define MAX 100

struct student
{
  long roll;
  char name[15];
  char dept[10];
  char semester[10];
   struct address{
     char state[20];
     char city[15];
     long tele_number;
	}address_info;

	};

  struct student student_info[MAX];

  void entry(void);
  void init_list(void);
  int  find_free(void);
  void find_data(void);
  char menu_select();
  void std_info();
  void menu(int x1,int y1,int x2,int y2);
  void line();
  void line1();

void main()
  {
	char choice;
	clrscr();
	init_list();

	for(;;)
      {
	 textcolor(7);
	 menu(2,2,80,24);
	 choice=menu_select();
	_setcursortype(_NORMALCURSOR);
	 switch(choice)
	  {
	   case  '1': 	entry(); 
				break;
	   case  '2':    	std_info();
				break;
	   case  '3': 	find_data();
				break;
	   case  '4':   	exit(0);
	  }
	}
 }

char menu_select()
   {
	 char s[80],choice;
	 int c,i;
	 line();
	 for(i=0;i<22;i++)
	 {
	  gotoxy(3+i,20);cprintf("%c",196);
	 }

     _setcursortype(_NOCURSOR);
	textcolor(6);
      gotoxy(25,3);
cprintf("A STUDENT DATABASE PROGRAM ");
	gotoxy(5,20);
cprintf("CURRENT DATE & TIME");
	textcolor(10);

	gotoxy(5,5);
cprintf("Select Your Choice ");
	gotoxy(6,22);
cprintf("%s",__DATE__);
	gotoxy(6,23);
cprintf("%s",__TIME__);
	textcolor(7);
	for(i=3;i<80;i++)
	{
	gotoxy(i,4);  cprintf("%c",205);
	}
	for(i=5;i<27;i++)
	 {
	 gotoxy(i-2,6);cprintf("%c",196);
	 }
	textcolor(4);
	gotoxy(4,8);   
cprintf("1. Enter new record: ");
	gotoxy(4,9);   
cprintf("2. Show  basic info: ");
	gotoxy(4,10); 
cprintf("3. Find  a record: ");
	gotoxy(4,11);   
cprintf("4. Exit: ");
	textcolor(10);
	gotoxy(4,8);  
cprintf("1");
	gotoxy(4,9);  
cprintf("2");
	gotoxy(4,10);
cprintf("3");
	gotoxy(4,11);  
cprintf("4");
	
    do{
	  choice=getch();
	 }while(choice!='1'&&choice!='2'&&choice!='3'&&choice!='4');
   
   return choice;
   }

void init_list(void)
	{
	 register int t;
	 for(t=0;t<MAX;t++)
	  student_info[t].name[0]='\0';
	}
void find_data()
   {
	long roll_no;
	register int t;
	textcolor(10);
	line();
	line1();
	textcolor(10);
	gotoxy(35,5);  cprintf("Enter Roll Number: ");
	scanf("%ld",&roll_no);

	for(t=0;t<=MAX;t++)
	{
	 if(roll_no==student_info[t].roll)
	  {
	   textcolor(4);
	   gotoxy(30,9);  cprintf("Roll: ");
	   gotoxy(30,10); cprintf("Name: ");
	   gotoxy(30,11); cprintf("Department: ");
	   gotoxy(30,12); cprintf("Semester: ");
	   gotoxy(30,13); cprintf("State: ");
	   gotoxy(30,14); cprintf("City: ");
	   gotoxy(30,15); cprintf("Phone No: ");
	   textcolor(10);
	   gotoxy(45,9);cprintf("%ld",student_info[t].roll);
	   gotoxy(45,10);cprintf("%s",strupr(student_info[t].name));
	   gotoxy(45,11);cprintf("%s",strupr(student_info[t].dept));
	   gotoxy(45,12);
   cprintf("%s",strupr(student_info[t].semester));
	   gotoxy(45,13);
	   cprintf("%s",strupr(student_info[t].address_info.state));
	   gotoxy(45,14);
	   cprintf("%s",strupr(student_info[t].address_info.city));
	   gotoxy(45,15);
	   cprintf("%ld",student_info[t].address_info.tele_number);
	   }
	else
	   {
		 gotoxy(45,20);
		 printf("The Roll %ld does not exist", roll_no);
	   }
	} // end of for

   gotoxy(45,24);
   printf("Press any key to clear screen");
   getch();
   clrscr();
  }

void entry(void)
   {
  FILE *fp;
	register int t;
	int slot,i;
	slot=find_free();
	if(slot==-1)
	 {
	  printf("\nList is full");
	 return;
   }

  if((fp=fopen("C:\stdinfo.doc","w+"))==NULL)
   {
	printf("Unable to open file (C:\\stdinfo.doc)");
	return ;
   }
	textcolor(2);
	line();
	line1();
	textcolor(10);
	gotoxy(43,5);   
cprintf("Enter Your Data");
	textcolor(12);
	gotoxy(40,7);  
cprintf("Enter Roll: ");
	scanf("%ld",&student_info[slot].roll);
	gotoxy(40,8);   
cprintf("Enter Name: ");
	scanf("%s",&student_info[slot].name);
	gotoxy(40,9);   
cprintf("Enter Dept: ");
	scanf("%s",&student_info[slot].dept);
	gotoxy(40,10);   
cprintf("Enter Semester: ");
	scanf("%s",&student_info[slot].semester);
	gotoxy(40,11);   
cprintf("Enter State: ");
	scanf("%s",&student_info[slot].address_info.state);
	gotoxy(40,12);   
cprintf("Enter City: ");
	scanf("%s",&student_info[slot].address_info.city);
	gotoxy(40,13);  
cprintf("Enter Phone Number: ");
	scanf("%ld",&student_info[slot].address_info.tele_number);
	textcolor(7);
	fwrite(student_info,sizeof student_info,1,fp);
	fclose(fp);
	gotoxy(45,24);
	printf("Press any key to clear screen");
	getch();
	clrscr();
	}

find_free(void)
   {
	register int t;
	for(t=0;student_info[t].name[0] && t<MAX;t++);
	 if(t==MAX)
	return -1;
	return t;
   }

void line()
   {
	int i;
	textcolor(7);
	for(i=1;i<20;i++)
	{
       gotoxy(25,4+i);cprintf("%c",179);
	}
   }

void std_info(void)
   {
	FILE *fp;
	register int t;
	int i;
	line();
	line1();

   if((fp=fopen("C:\stdinfo.doc","r+"))==NULL)
	{
	 printf("cannot open file");
	 return ;
	}
   fread(student_info,sizeof student_info,1,fp);
	textcolor(10);
	gotoxy(31,5);
cprintf("Roll");
	gotoxy(42,5);
cprintf("Name");
	gotoxy(58,5);
cprintf("Dept");
	gotoxy(70,5);
cprintf("Semester");
   for(t=0;t<MAX;t++)
	{
	 if(student_info[t].name[0])
	  {
	   textcolor(6);
	   gotoxy(28,7+t);    
   cprintf("%ld",student_info[t].roll);
         gotoxy(40,7+t);    
         cprintf("%s",strupr(student_info[t].name));
         gotoxy(58,7+t);           
         cprintf("%s",strupr(student_info[t].dept));
         gotoxy(71,7+t);      
         cprintf("%s",strupr(student_info[t].semester));
	   textcolor(12);
         fclose(fp);
	 }
   }
 gotoxy(45,24);
 printf("Press any key to clear screen");
 getch();
 clrscr();
 }

 void menu(int x1,int y1,int x2,int y2)
	{
	 int i;
	 gotoxy(x1,y1); 
 cprintf("%c",201);
	 for(i=x1+1;i<x2;i++)
	 {
	   cprintf("%c",205);
	 }
	   cprintf("%c",187);
	 for(i=y1+1;i<y2;i++)
	 {
	  gotoxy(x1,i);
	  cprintf("%c",186);
	  gotoxy(x2,i);
  cprintf("%c",186);
	}
	gotoxy(x1,y2);
cprintf("%c",200);

	for(i=x1+1;i<x2;i++)
	{
	  cprintf("%c",205);
	}
   cprintf("%c",188);
  }

void line1()
   {
	int i;
	textcolor(7);
	  for(i=1;i<55;i++)
	  {
	   gotoxy(25+i,6);cprintf("%c",196);
	  }
   }


