/*	CP06_30.C	*/
/*	Testing either a number is prime or not */
#include<stdio.h>
#include<conio.h>
void main()
 {
  long int n;
  int i=1, d=0;

 XX:
  printf("\nEnter a positive integer:");
  scanf("%ld",&n);
  if (n<=0)
   goto XX;
  printf("\nDivisors of %ld are: ", n);

  while(i<=n)
    {
      if(n%i==0)
	 {
	 printf("%d  ",i);
	 d++;
	 }
     i++; 
    }

  if(d>=3)
    printf("\nSo, %ld is not a prime number",n );
  else 
    printf("\nSo, %ld is a prime number",n );

 getch();
}
