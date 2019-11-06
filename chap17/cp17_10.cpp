/*	CP17_10.CPP	*/
/*	Using inline Function */
#include<stdio.h>
inline int Add(int x, int y)
{
 int sum;
 sum = x+y;
 printf("\nx  = %d",x);
 printf("\ty  = %d",y);
 printf("\tsum= %d",sum);
 return 0;
}
int main()
{
Add(5, 4);
Add(13,20);
return 0;
}
