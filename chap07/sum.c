/*	Save This Function as (C:\Sum.c)	*/
int Sum()	// Function Definition
{
 int Value1, Value2, Sum;
 printf("Enter Value1 : ");
 scanf("%d", &Value1);
 printf("Enter Value2 : ");
 scanf("%d", &Value2);
 Sum = Value1 + Value2;
 printf("Value1 = %d \nValue2 = %d", Value1, Value2);
 printf("\nSum =%d", Sum);
 return (Sum);
}
