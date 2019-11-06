/*	CP17_02.CPP		*/
/* 	Using get() & put()  Functions	*/
#include<iostream.h>
void main()
 { 
 int Count = 0; char Ch ;
 cout<<"Enter a line of text:"<< endl;
 Ch = cin.get();
 cout<<"\nLine Entered:"<< endl;
 while(Ch!='\n')
  {  
   cout.put(Ch); 
   Count++; 
   Ch= cin.get(); 
  }
 cout<<"\nCharacters (including white spaces): ";
 cout<< Count;
 }
