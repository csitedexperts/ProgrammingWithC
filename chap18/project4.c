/*      Project4.C	*/
/*	File and Directory Service System	*/

# include <stdio.h>
# include <process.h>
# include <string.h>
# include <stdlib.h>
# include <ctype.h>
# include <conio.h>
# include <fcntl.h>
# include <dir.h>
# include <dos.h>
# include "c:\TC\Include\Sys\types.h"
# include "c:\TC\Include\Sys\stat.h"


// various Menu definitions

char *Menu[] =	{
			"^1. Copy File",
			"^2. Delete File",
			"^3. Make Directory",
			"^4. Remove Directory",
			"^5. Show Files & Directories",
			"^6. Exit"
			} ;

// characters following ^ symbol are hot keys
// help Msgs  for different Menu items and other frequently required Msgs
char *Msgs[]={
		" A File and Directory Service Project Program ",
		" Select your choice using Up and Dn arrow keys ",
		" Copy Source File to Destinition File",
		" Delete a File",
		" Make a New Directory    ",
		" Remove an Existing Directory",
		" Show Files and Directories",
		" Exit the Program",
		};

char far *vid_mem ;
int ascii, scan ;

int main()
{
int MyChoice ;

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

size ( 32, 0 ) ;  // hide cursor

// create opening screen display

DrawBox ( 1, 0, 21, 79, 7 ) ;
DrawBox ( 1, 0, 23, 79, 7 ) ;

// create screen on which Menus are to be popped up
MainScreen() ;

while ( 1 )
	{
		// pop up main Menu and collect choice
	MyChoice = PopMenu ( Menu, 6, 5, 5, "123456", 2 ) ;

	// test choice received
	switch ( MyChoice )
	{
	case 1 :
		CopyFile();
		break ;
	case 2 :
		DeleteFile() ;
		break ;
	case 3 :
		MakeDir() ;
		break ;
	case 4 :
		RemoveDir() ;
		break ;
	case 5 :
		FindDir();
		break ;
	case 6 :
		size ( 6, 7 ) ;
		clrscr() ;
	exit ( 1 ) ;
	} // end of switch
	}    // end of while

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

// prepares the screen for popping up a Menu
MainScreen()
{
	int i, j ;
	DrawBox ( 1, 0, 23, 79, 7 ) ;
	DrawBox ( 3, 0, 21, 79, 7 ) ;
	Write ( 3, 0, 204, 7 ) ;
	Write ( 3, 79, 185, 7 ) ;
	Write ( 21, 0, 204, 7 ) ;
	Write ( 21, 79, 185, 7 ) ;

	for ( i = 4 ; i <= 20 ; i++ )
	{
		for ( j = 1 ; j <= 78 ; j += 2 )
		{
			Write ( i, j, 178, 7 ) ;
			Write ( i, j + 1, 178, 7 ) ;
		}
	}

	WriteMsg ( Msgs [0], 2, 12, 112 ) ;
	WriteMsg ( Msgs [1], 22, 14, 112 ) ;
return 0;
}

// writes a character and its attribute in VDU memory
Write ( int r, int c, char ch, int attb )
{
	char far *v ;

	v = vid_mem + r * 160 + c * 2 ;  
//calculate address in VDU memory 
//corresponding to row r and column c

	*v = ch ;  // store ascii value of character
	v++ ;
	*v = attb ;  // store attribute of character
return 0;
}

// writes a string into VDU memory in the desired attribute
WriteMsg ( char *s, int r, int c, int attb )
{
	while ( *s != '\0' )
	{
// if next character is hot key, 
//write it in different attribute, 
//otherwise in normal attribute

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

// pops up a Menu on the existing screen contents
PopMenu(char **Menu,int count,int sr,int sc,char *hotkeys, int helpnumber)
{
int er, ec, i, l = 0, areareqd, areaforhelp, choice ;
char *p, *h ;

// calculate ending row for Menu
er = sr + count + 1 ;

	// find longest Menu item
for ( i = 0 ; i < count ; i++ )
	{
		if ( strlen ( Menu[i] ) > l )
			l = strlen ( Menu[i] ) ;
	}

// calculate ending column for Menu
	ec = sc + l + 3 ;

// calculate area required to save screen 
//contents where Menu is to be popped up
	areareqd = ( er - sr + 1 ) * ( ec - sc + 1 ) * 2 ;

	p = malloc ( areareqd ) ;  // allocate memory

	// check if allocation is successful
	if ( p == NULL )
	{

		getch() ;
		exit ( 2 ) ;
	}

	// save screen contents into allocated memory
	SaveMode ( sr, sc, er, ec, p ) ;

	// draw filled box with shadow
	MenuBox ( sr, sc, er, ec, 112, 66 ) ;

	// display the Menu in the filled box
	displayMenu ( Menu, count, sr + 1, sc + 1 ) ;

	// calculate area required for help box
	areaforhelp = ( 9 - 6 + 1 ) * ( 78 - 35 + 1 ) * 2 ;

	h = malloc ( areaforhelp ) ;
	if ( h == NULL )
	{

		getch() ;
		exit ( 3 ) ;
}
SaveMode ( 6, 35, 9, 78, h ) ;
MenuBox ( 16, 10, 18, 58, 112, 66 ) ;

// display help message
WriteMsg ( Msgs [helpnumber], 17, 16, 112 ) ;

// receive user's choice
choice = getresponse ( Menu, hotkeys, sr, sc, count, helpnumber ) ;

	// restore original screen contents
	ResetMode ( sr, sc, er, ec, p ) ;
	ResetMode ( 6, 35, 9, 78, h ) ;

	// free allocated memory
	free ( p ) ;
	free ( h ) ;

	return ( choice ) ;
}

// displays or hides the cursor
size ( int ssl, int esl )
{
	union REGS i, o ;
	i.h.ah = 1 ;  // service number
	i.h.ch = ssl ;  // starting scan line
	i.h.cl = esl ;  // ending scan line
	i.h.bh = 0 ;  // video page number

	// issue interrupt for changing the size of the cursor
	int86 ( 16, &i, &o ) ;
return 0;
}

// gets the ascii and scan codes of the key pressed
getkey()
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
		v = vid_mem + i * 160 + j * 2 ;  
       // calculate address
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

// displays the Menu in box drawn by MenuBox()
displayMenu ( char **Menu, int count, int sr, int sc )
{
	int i ;

	for ( i = 0 ; i < count ; i++ )
	{
	// write Menu item in VDU memory
	WriteMsg ( Menu[i], sr, sc, 112 ) ;
	sr++ ;
	}
return 0;
}

// draws double-lined box
DrawBox ( int sr, int sc, int er, int ec, int attr )
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

// receives user's response for the Menu displayed
getresponse ( char **Menu, char *hotkeys, int sr, int sc, int count, int helpnumber )
{
	int choice = 1, len, hotkeychoice ;

	// calculate number of hot keys for the Menu
	len = strlen ( hotkeys ) ;

	// highlight first Menu item
	WriteMsg ( Menu[choice - 1], sr + choice, sc + 1, 111 ) ;

	while ( 1 )
	{
	getkey() ;  // receive key

	// if special key is hit
	if ( ascii == 0 )
	{
	switch ( scan )
	{
	case 80 :  // down arrow key

	// make highlighted item normal
	WriteMsg ( Menu[choice - 1], sr + choice, sc + 1, 112 ) ;

		choice++ ;
		helpnumber++ ;
		break ;

	case 72 :  // up arrow key
	// make highlighted item normal
	WriteMsg ( Menu[choice - 1], sr + choice, sc + 1, 112 ) ;

		choice-- ;
		helpnumber-- ;
		break ;
	}

// if highlighted bar is on first item and up arrow key is hit
		if ( choice == 0 )
		{
		choice = count ;
		helpnumber = helpnumber + count ;
		}

// if highlighted bar is on last item 
//and down arrow key is hit
	if ( choice > count )
		{
		choice = 1 ;
		helpnumber = helpnumber - count ;
		}

		// highlight the appropriate Menu item
	WriteMsg ( Menu[choice - 1], sr + choice, sc + 1, 111 ) ;
	MenuBox ( 16, 10, 18, 58, 112, 66 ) ;

	// write the corresponding help message
	WriteMsg ( Msgs [helpnumber], 17, 16, 112 ) ;
		}
	else
		{
		if ( ascii == 13 )  // Enter key
		return ( choice ) ;

		if ( ascii == 27 )  // Esc key
		return ( 27 ) ;

		ascii = toupper ( ascii ) ;
		hotkeychoice = 1 ;

		// check whether hot key has been pressed
		while ( *hotkeys != '\0' )
		{
		if ( *hotkeys == ascii )
		return ( hotkeychoice ) ;
		else
		{
		hotkeys++ ;
		hotkeychoice++ ;
		}
		}

		// reset hotkeys to point to the 
           //first character in the string
		hotkeys = hotkeys - len ;
		}
	}
}



CopyFile()
{
	char sfile[20], tfile[20], buffer[512], *p ;
	int areareqd, inhandle, outhandle, bytes, flag ;

	areareqd = ( 20 - 5 + 1 ) * ( 70 - 5 + 1 ) * 2 ;
	p = malloc ( areareqd ) ;
	if ( p == NULL )
	{
	getch() ;
	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	return ;
	}

	SaveMode ( 5, 5, 20, 70, p ) ;
	MenuBox ( 6, 5, 13, 60, 112, 66 ) ;

	WriteMsg ( "Enter source file name:", 7, 8, 112 ) ;
	size ( 6, 7 ) ;  // display cursor
	gotoxy ( 33, 8 ) ;
	gets ( sfile ) ;
	size ( 32, 0 ) ;  // hide cursor

	// open source file in low level binary mode for reading
	inhandle = open ( sfile, O_RDONLY | O_BINARY ) ;

	// if unable to open file
	if ( inhandle < 0 )
	{
	WriteMsg ( "Unable to open source file!", 9, 8, 112 ) ;
	getch() ;

	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
	return ;
	}

	WriteMsg ( "Enter target file name:", 9, 8, 112 ) ;
	size ( 6, 7 ) ;
	gotoxy ( 33, 10 ) ;
	gets ( tfile ) ;
	size ( 32, 0 ) ;

	// open target file in low level binary mode for writing
outhandle=open(tfile,O_CREAT|O_WRONLY | O_BINARY, S_IWRITE);

	// if unable to open file
	if ( outhandle < 0 )
	{
	WriteMsg ( "Unable to open target file!", 11, 8, 112 ) ;
	getch() ;
	close ( inhandle ) ;
	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
	return ;
	}

// read chunks of 512 bytes from source file and write
// to target file till there are bytes to read
	while ( ( bytes = read ( inhandle, buffer, 512 ) ) > 0 )
	{
	flag = write ( outhandle, buffer, bytes ) ;
	if ( flag == -1 )
		break ;
	}

	if ( flag == -1 )
	WriteMsg ( "Unable to copy file!", 11, 8, 112 ) ;
	else
    WriteMsg("File has been successfully copied.",11,8,112);


	getch() ;

	// close files and restore original screen contents
	close ( inhandle ) ;
	close ( outhandle ) ;
	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
    return ;
  }

DeleteFile()
{
	union REGS ii, oo ;
	int areareqd ;
	char filename[20], *p ;

	areareqd = ( 20 - 5 + 1 ) * ( 70 - 5 + 1 ) * 2 ;
	p = malloc ( areareqd ) ;
	if ( p == NULL )
	{

		getch() ;

		WriteMsg ( Msgs[1], 22, 14, 112 ) ;
		return ;
	}

	SaveMode ( 5, 5, 20, 70, p ) ;
	MenuBox ( 6, 5, 11, 60, 112, 66 ) ;
	WriteMsg ( "Enter name of file to be deleted:", 7, 8, 112 ) ;
	size ( 6, 7 ) ;
	gotoxy ( 43, 8 ) ;
	gets ( filename ) ;
	size ( 32, 0 ) ;

	// issue interrupt for deleting file
	ii.h.ah = 65 ;  // dos service number
	ii.x.dx = ( unsigned int ) filename ;  // store base address
	intdos ( &ii, &oo ) ;

	// check if successful in deleting file
	if ( oo.x.cflag == 0 )
	WriteMsg ( "File has deleted successfully.", 9, 8, 112 ) ;
	else
	{
	switch ( oo.x.ax )
	{
	case 2 :
		WriteMsg ( "File not found!", 9, 8, 112 ) ;
		break ;
	case 3 :
		WriteMsg ( "Invalid path!", 9, 8, 112 ) ;
		break ;

	case 5 :
		WriteMsg ( "Access denied!", 9, 8, 112 ) ;
		break ;

	case 0x11 :
		WriteMsg ( "Invalid drive name!", 9, 8, 112 ) ;
		break ;

		default :
		WriteMsg ( "Improper request!", 9, 8, 112 ) ;
		}
	}

	getch() ;

	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
return ;
}


MakeDir()
{
	union REGS ii, oo ;
	int areareqd ;
	char dirname[20], *p ;

	areareqd = ( 20 - 5 + 1 ) * ( 70 - 5 + 1 ) * 2 ;
	p = malloc ( areareqd ) ;
	if ( p == NULL )
	{
		getch() ;
		WriteMsg ( Msgs[1], 22, 14, 112 ) ;
		return ;
	}

	SaveMode ( 5, 5, 20, 70, p ) ;
	MenuBox ( 6, 5, 11, 60, 112, 66 ) ;

	WriteMsg ( "Enter name of directory:", 7, 8, 112 ) ;
	size ( 6, 7 ) ;
	gotoxy ( 34, 8 ) ;
	gets ( dirname ) ;
	size ( 32, 0 ) ;

	ii.h.ah = 57 ;  // dos service number
ii.x.dx = ( unsigned int ) dirname ;  
        // base address of directory name
	intdos ( &ii, &oo ) ;  // issue interrupt

  	// check if successful in creating directory
	if ( oo.x.cflag == 0 )
	WriteMsg ( "Directory is created successfully.", 9, 8, 112 ) ;
	else
	{
	if ( oo.x.ax == 5 )
		WriteMsg ( "Improper access!", 9, 8, 112 ) ;
	if ( oo.x.ax == 3 )
		WriteMsg ( "Invalid path!", 9, 8, 112 ) ;
	}

	getch() ;

	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
return;
}

RemoveDir()
{
	union REGS ii, oo ;
	int areareqd ;
	char dirname[20], *p ;

	areareqd = ( 20 - 5 + 1 ) * ( 76 - 5 + 1 ) * 2 ;
	p = malloc ( areareqd ) ;
	if ( p == NULL )
	{

		getch() ;

		WriteMsg ( Msgs[1], 22, 14, 112 ) ;
		return ;
	}

	SaveMode ( 5, 5, 20, 76, p ) ;
	MenuBox ( 6, 5, 12, 75 ,112, 66 ) ;
	WriteMsg ( "Enter Directory name:", 7, 8, 112 ) ;
	size ( 6, 7 ) ;
	gotoxy ( 30, 8 ) ;
	gets ( dirname ) ;
	size ( 32, 0 ) ;

	// issue interrupt for removing directory
	ii.h.ah = 58 ;
	ii.x.dx = ( unsigned int ) dirname ;
	intdos ( &ii, &oo ) ;

	// check if successful in removing directory
	if ( oo.x.cflag == 0 )
WriteMsg("Directory is removed successfully.",10,8,112);
	else
	{
	switch ( oo.x.ax )
	{
	case 3 :
		WriteMsg ( "Invalid path!", 10, 8, 112 ) ;
		break ;

		case 5 :
			WriteMsg ( "Improper access!",10, 8, 112 ) ;
			break ;
		case 2 :

		WriteMsg ( "Directory does not exist!", 10, 8, 112 ) ;
				break ;
	case 0x10 :
	WriteMsg ( "Cannot remove current directory!", 10, 8, 112 ) ;
	}
    }

getch() ;

WriteMsg ( Msgs[1], 22, 14, 112 ) ;
ResetMode ( 5, 5, 20, 76, p ) ;
free ( p ) ;
return;
}


FindDir()
{
int areareqd ;
char *p, filetosearch[20] ;

char sz[10], dd[10], mm[10], yy[10], hr[10], m[10], temp[3] = "0" ;
struct ffblk file ;
unsigned int done, row, col, a, year, month, day, hour, min ;

areareqd = ( 20 - 3 + 1 ) * ( 70 - 3 + 1 ) * 2 ;
p = malloc ( areareqd ) ;
if ( p == NULL )
	{
	getch() ;

	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	return ;
	}

SaveMode ( 5, 5, 20, 70, p ) ;
MenuBox ( 6, 5, 11, 60, 112, 66 ) ;

WriteMsg ( "Enter Search Criteria:", 7, 8, 112 ) ;
size ( 6, 7 ) ;
gotoxy ( 32, 8 ) ;
gets ( filetosearch ) ;
size ( 32, 0 ) ;

	// find first file which matches the skeleton
	done = findfirst ( filetosearch, &file, FA_DIREC ) ;

	// if successful in finding the first file
  if ( done == 0 )
	{
	MenuBox ( 5, 5, 20, 70, 112, 66 ) ;
	row = 8;
	col = 8 ;

	WriteMsg ( "Directory listing", 6, 28, 112 ) ;
	WriteMsg ( "-----------------", 7, 28, 112 ) ;

	// carry out search for rest of the 
//files matching the skeleton
	while ( done == 0 )
		{
		row++ ;
		WriteMsg ( file.ff_name, row, col, 112 ) ;

		// if not a sub-directory entry
		if ( ( file.ff_attrib & 16 ) == 0 )
		{
			ltoa ( file.ff_fsize, sz, 10 ) ;
			WriteMsg ( sz, row, col + 19, 112 ) ;

			// calculate and print date and time
			a = file.ff_fdate ;
			year = 80 + ( a >> 9 ) ;
			month = ( a << 7 ) >> 12 ;
			day = ( a << 11 ) >> 11 ;

			itoa ( day, dd, 10 ) ;
		// if a single digit day, concatenate it to 0
		if ( strlen ( dd ) == 1 )
			strcat ( temp, dd ) ;
			else
			strcpy ( temp, dd ) ;
			WriteMsg ( temp, row, col + 30, 112 ) ;
		Write ( row, col + 32, '/', 112 ) ;
			// reinitialise temp
			strcpy ( temp, "0" ) ;
			itoa ( month, mm, 10 ) ;
		// if a single digit month, concatenate it to 0
			if ( strlen ( mm ) == 1 )
				strcat ( temp, mm ) ;
			else
			strcpy ( temp, mm ) ;

			WriteMsg ( temp, row, col + 33, 112 ) ;
			Write ( row, col + 35, '/', 112 ) ;
			strcpy ( temp, "0" ) ;
			itoa ( year, yy, 10 ) ;
			if ( strlen ( yy ) == 1 )
			strcat ( temp, yy ) ;
			else
			strcpy ( temp, yy ) ;
			WriteMsg ( temp, row, col + 36, 112 ) ;
		strcpy ( temp, "0" ) ;
			a = file.ff_ftime ;
			hour = ( a >> 11 ) ;
			min = ( a << 5 ) >> 10 ;

			if ( hour == 0 )
			hour = 12 ;
			strcpy ( temp, "0" ) ;
			itoa ( hour, hr, 10 ) ;
			if ( strlen ( hr ) == 1 )
			strcat ( temp, hr ) ;
			else
			strcpy ( temp, hr ) ;

			WriteMsg ( temp, row, col + 45, 112 ) ;
			Write ( row, col + 47, ':', 112 ) ;
			strcpy ( temp, "0" ) ;
			itoa ( min, m, 10 ) ;
			if ( strlen ( m ) == 1 )
				strcat ( temp, m ) ;
			else
			strcpy ( temp, m ) ;

			WriteMsg ( temp, row, col + 48, 112 ) ;

			strcpy ( temp, "0" ) ;
			}
			else
			WriteMsg ( "<DIR>", row, col + 15, 112 ) ;

			// find the next file matching the skeleton
			done = findnext ( &file ) ;

			// if screen is full
			if ( row == 18 )
			{
			row = 8 ;

		getch() ;

	MenuBox ( 5, 5, 20, 70, 112, 66 ) ;
	WriteMsg ( "Directory listing", 6, 28, 112 ) ;
	}
	}
	}
	else
	WriteMsg ( "File not found!", 9, 8, 112 ) ;
	getch() ;
	WriteMsg ( Msgs[1], 22, 14, 112 ) ;
	ResetMode ( 5, 5, 20, 70, p ) ;
	free ( p ) ;
return;
}
