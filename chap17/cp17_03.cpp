/*	CP17_03.CPP		*/
/* 	Using getline() and write() functions */
#include<iostream.h>
#include<string.h>
void main(){
  int size = 50 ;
  char *Line ;
  cout <<"Enter a line of text : ";
  cin.getline(Line, size);
  cout <<"Output (using write()):" << endl ;
  int L = strlen(Line);
  for(int i=1; i<=L; i=i+2) 
   { 
    cout.write(Line, i);
    cout <<endl; 
   }
 }
