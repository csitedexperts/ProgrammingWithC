/*      Project3.C   */
/*	An Excellent Calendar Program*/

# include <stdio.h>
# include <conio.h>
# include <string.h>
# include <stdlib.h>
# include <process.h>
# include <ctype.h>
# include <dos.h>

char far *vid_mem ;
int ascii, scan ;


Calendar();
GetKey();
SetMode ( int  );
Write ( int, int, char , int );
String ( char *, int, int , int );
Draw ( int , int , int, int , int );
Size ( int , int );
MenuBox ( int , int , int , int , char , char );
SaveMode ( int , int , int , int , char * );
ResetMode ( int , int, int , int , char * );

int main()
  {
// store base address of VDU memory and set appropriate video mode
	#ifdef MA

		// store base address for MA
		vid_mem = ( char far * ) 0xb0000000L ;
		SetMode ( 7 ) ;

	#else

		// store base address for other display adapters
		vid_mem = ( char far * ) 0xb8000000L ;
		SetMode ( 3 ) ;

	#endif

	Size ( 32, 0 ) ;  // hide cursor

	// create opening screen display

	Draw ( 1, 0, 21, 79, 7 ) ;
	Draw ( 1, 0, 23, 79, 7 ) ;
	// create screen on which menus are to be popped up
	Calendar();
	return 0;
  }

// sets video mode
SetMode ( int mode )
{
	union REGS i, o ;
	i.h.ah = 0 ;  // service no.
	i.h.al = mode ;  // video mode
	int86 ( 16, &i, &o ) ;  // issue interrupt

return 0;
}



// writes a character and its attribute in VDU memory
Write ( int r, int c, char ch, int attb )
{
char far *v ;

v = vid_mem + r * 160 + c * 2 ;
// calculate address in VDU memory
//corresponding to row r and column c

*v = ch ;  // store ascii value of character
v++ ;
*v = attb ;  // store attribute of character
return 0;
}


// writes a string into VDU memory in the desired attribute
String ( char *s, int r, int c, int attb )
{
while ( *s != '\0' )
{
// if next character is hot key,
//write it in different attribute, otherwise in normal attribute

if ( *s == '^' )
 {
 s++ ;
 Write ( r, c, *s, 126 ) ;
 }
else
Write ( r, c, *s, attb ) ;

s++ ;
c++ ;
}
return 0;
}

// displays or hides the cursor
Size ( int ssl, int esl )
{
	union REGS i, o ;
	i.h.ah = 1 ;  // service number
	i.h.ch = ssl ;  // starting scan line
	i.h.cl = esl ;  // ending scan line
	i.h.bh = 0 ;  // video page number

// issue interrupt for changing the Size of the cursor
	int86 ( 16, &i, &o ) ;
return 0;
}

// gets the ascii and scan codes of the key pressed
GetKey()
{
union REGS ii, oo ;

// wait till a key is hit

while ( ! kbhit() );
ii.h.ah = 0 ;  // service number
// issue interrupt
int86 ( 22, &ii, &oo ) ;

scan = oo.h.ah ;
ascii = oo.h.al ;
return 0;
}

// saves screen contents into allocated memory in RAM
SaveMode ( int sr, int sc, int er, int ec, char *buffer )
{
char far *v ;
int i, j ;

for ( i = sr ; i <= er ; i++ )
{
for ( j = sc ; j <= ec ; j++ )
	{
	v = vid_mem + i * 160 + j * 2 ;  // calculate address
	*buffer = *v ;  // store character
	v++ ;
	buffer++ ;
	*buffer = *v ;  // store attribute
	buffer++ ;
	}
	}
return 0;
}

// restores screen contents from allocated memory in RAM
ResetMode ( int sr, int sc, int er, int ec, char *buffer )
{
char far *v ;
int i, j ;

for ( i = sr ; i <= er ; i++ )
{
	for ( j = sc ; j <= ec ; j++ )
	{
	v = vid_mem + i * 160 + j * 2 ;  // calculate address
	*v = *buffer ;  // restore character
	v++ ;
	buffer++ ;
	*v = *buffer ;  // restore attribute
	buffer++ ;
	}
	}
return 0;
}

// draws filled box with or without shadow
MenuBox ( int sr, int sc, int er, int ec, char fil, char shad )
{
	int i, j ;

	// draw filled box
	for ( i = sr ; i < er ; i++ )
	{
		for ( j = sc ; j < ( ec - 1 ) ; j++ )
			Write ( i, j, ' ', fil ) ;
	}

	// if no shadow is required for the filled box
	if ( shad == 0 )
	{
		for ( i = sr ; i <= er ; i++ )
		{
			Write ( i, ec, ' ', fil ) ;
			Write ( i, ( ec - 1 ), ' ', fil ) ;
		}

		for ( j = sc ; j <= ec ; j++ )
			Write ( er, j, ' ', fil ) ;
	}
	else
	{
		// draw vertical and horizontal shadow
		for ( i = sr + 1 ; i <= er ; i++ )
		{
			Write ( i, ec, ' ', shad ) ;
			Write ( i, ( ec - 1 ), ' ', shad ) ;
		}

		for ( j = sc + 2 ; j <= ec ; j++ )
			Write ( er, j, ' ', shad ) ;
	}
return 0;
}

// draws double-lined box
Draw ( int sr, int sc, int er, int ec, int attr )
{
	int i ;

	// draw horizontal lines
	for ( i = sc + 1 ; i < ec ; i++ )
	{
		Write ( sr, i, 205, attr ) ;
		Write ( er, i, 205, attr ) ;
	}

	// draw vertical lines
	for ( i = sr + 1 ; i < er ; i++ )
	{
		Write ( i, sc, 186, attr ) ;
		Write ( i, ec, 186, attr ) ;
	}

	// draw four corners
	Write ( sr, sc, 201, attr ) ;
	Write ( sr, ec, 187, attr ) ;
	Write ( er, sc, 200, attr ) ;
	Write ( er, ec, 188, attr ) ;
return 0;
}


Calendar()
{
char *months[] = {
"January",   "Feburary", "March",    "April",
"May",       "June",     "July",     "August",
"September", "October",  "November", "December"
		 } ;

int days[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 } ;
int m, y, leapyears, row, col, x, i,areareqd,firstday,thisyrdays ;
	long int totaldays ;
	char *p, str1[5], str2[3] ;

	areareqd = ( 20 - 3 + 1 ) * ( 70 - 3 + 1 ) * 2 ;
	p =(char *) malloc ( areareqd ) ;
	if ( p == NULL )
	{
		String ( " Unsufficient Memory Spaces ", 22, 28, 112 ) ;
		getch() ;
		return 0;
	}

	SaveMode ( 5, 5, 20, 70, p ) ;
	MenuBox ( 6, 5, 11, 50, 112, 66 ) ;

   String ( " Display Calendar service ", 22, 24, 112 ) ;
	MM:
	String ( "Enter month ( 1 - 12 ):", 7, 8, 110 ) ;
	Size ( 6, 7 ) ;
	gotoxy ( 33, 8 ) ;
	scanf ( "%d", &m ) ;
	if( m<1 || m>12)
	goto MM;
	Size ( 32, 0 ) ;
	String ( "Enter year:", 9, 8, 112 ) ;
	Size ( 6, 7 ) ;
	gotoxy ( 21, 10 ) ;
	scanf ( "%d", &y ) ;
	Size ( 32, 0 ) ;

	while ( 1 )
	{
		days[1] = 28 ;
		thisyrdays = 0 ;

		// calculate number of leap years before the year y
	   leapyears=( y - 1 )/4 -(y-1)/100 + ( y-1)/400 ;

		// check if y is a leap year
		if ( y % 400 == 0 || y % 100 != 0 && y % 4 == 0 )
			days[1] = 29 ;
		else
			days[1] = 28 ;

		totaldays = leapyears + ( y - 1 ) * 365L ;

		// calculate days before month m in year y
		for ( i = 0 ; i <= m-2 ; i++ )
			thisyrdays = thisyrdays + days[i] ;

		firstday = (int) ( ( totaldays + thisyrdays ) % 7 ) ;

		// write month and year
		MenuBox ( 5, 3, 20, 78, 112, 66 ) ;
		String ( months[m-1], 6, 19, 112 ) ;
		itoa ( y, str1, 10 ) ;
		String ( str1, 6, 29, 112 ) ;

String ( "Mon   Tue   Wed   Thu   Fri   Sat   Sun", 8, 7, 112 ) ;

// calculate in which column first
//day of the Calendar is to be written
		col = 7 + firstday * 6 ;

		row = 10 ;

		// display Calendar
		for ( x = 1 ; x <= days[m-1] ; x++ )
		{
			itoa ( x, str2, 10 ) ;
			String ( str2, row, col, 112 ) ;
			col = col + 6 ;

	// if September 1752 knock off 11 //
//days to accomodate the changeover
//from Julian to Gregorian Calendar
if ( y == 1752 && m == 9 && x == 2 )
	x = 13 ;
	if ( col > 43 )
	{
	row = row + 2 ;
	col = 7 ;
	}
	if ( row > 18 && col == 7 )
	row = 10 ;
	}


String ( " Change month and year using arrow keys ",3, 20, 112 ) ;
String ( " Press Up Arrow for Next year  ", 10, 47, 112 ) ;
String ( " Press Dn Arrow for Prev year  ", 12, 47, 112 ) ;
String ( " Press Rt Arrow for Next month ",14, 47, 112 ) ;
String ( " Press Lt Arrow for Prev month ",16, 47, 112 ) ;
String ( " Press Esc to exit....   ", 18, 49, 112 ) ;
GetKey() ;

	// check which is the next Calendar required
	switch ( scan )
		{
		case 77 :  // right arrow

			if ( m == 12 )
			{
			y = y + 1 ;
			m = 1 ;
			}
			else
			m = m + 1 ;
			break ;

		case 75 :  // left arrow
				if ( m == 1 )
				{
					y = y - 1 ;
					m = 12 ;
				}
				else
					m = m - 1 ;

				break ;
				case 72 :  // up arrow
				y++ ;
				break ;

		case 80 :  // down arrow
				y-- ;
				break ;

			case 1 :  // Esc key

				ResetMode ( 5, 5, 20, 70, p ) ;
				free ( p ) ;
				return 0;
		}
	}

}
