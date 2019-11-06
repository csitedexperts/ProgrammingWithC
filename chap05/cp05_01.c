/*	CP05_01.C	*/
/*	Using Constant 	*/
 #include<stdio.h> 
 #include<conio.h>
 main(){
  const long  Roll  = 1000001;
  #define     Name  "Masud Karim"
  const float Marks = 75.5;
  const char  Sex   = 'M';
  const float Exp   = 3.5E+3;

  printf("\nRoll = %ld", Roll);
  printf("\nName = %s", Name);
  printf("\nMarks= %.2f",Marks);
  printf("\nSex  = %c", Sex);
  printf("\nExp  = %e", Exp);
  getch();
}
