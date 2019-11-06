/*	CP07_56.C	*/
/* Solving Tower of Hanoi Problem */

 #include<stdio.h>
 #include<conio.h>
 void Hanoi(int, char, char, char);

 int main()
 {
 int n;
 char a='L', b='M', c='R';
 clrscr();
 printf("How many disk ? ");
 scanf("%d",&n);
 Hanoi(n,a,b,c);
 getch();
 }
void Hanoi(int n, char a, char b, char c)
 {
  static int i=1;  
  if(n!=0)
   {
   Hanoi(n-1,a,c,b);
   printf("Pass #%2d: ", i++);
   printf("Move disk %d from %4c  to %4c\n",n,a,c);
   Hanoi(n-1,b,a,c);
  }
 }
