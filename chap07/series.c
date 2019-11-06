/* c:\series.c   */
/* Program file that declare and use global static variable */

static int number;   //Global static variable

series()
{
number = number +10;
return(number);
}

void series_start(int start_value)
{
number = start_value;
}
