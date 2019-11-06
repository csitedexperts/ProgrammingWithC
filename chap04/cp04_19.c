/* CP04_19.C	*/
// Using scanf() Function
#include<stdio.h>  
#include<conio.h>  
main()
{	
int Roll;
float Marks; 
printf("Enter your Roll and Marks : ");
scanf ("%d %f", &Roll, &Marks);
printf("Your Roll is :%d", Roll);
printf("\nYou Obtained :%.2f", Marks);
getch();
}
