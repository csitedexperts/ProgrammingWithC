/*	Project5.C   */
/* 	An Antivirus Program */
/* 	(c) 2002 Monirul Islam Sharif */
/* 	Works for SW Diehard 2 virus (EXE version) */
#include <stdio.h>
#include <string.h>
#include <dir.h>
#include <dos.h>
#include <conio.h>

long checked, infected, cleaned;
int counter=0;
char ch[5] = {'\\', '|', '/', '-'};

char virus_sign[16] = {	0xe8, 0x0,  0x0,  0x5b, 0x8d, 0x7f, 0x5b, 0x0e,
			0x07, 0xfd, 0xab, 0x53, 0x58, 0xb1, 0x04, 0xd3 };

/*********	CODE RELATED TO EXE HEADER 	**********************/
typedef unsigned int word;
struct TEXEHeader
 {
	word sign;
	word mod512;
	word page512;
	word RelItems;
	word headersize;
	word minalloc;
	word maxalloc;
	word _SS;
	word _SP;
	word checksum;
	word _IP;
	word _CS;
	word RelOffset;
};

long int exe_startloc(const struct TEXEHeader header)
{
	return header.headersize*0x10;
}

long int exe_codesegloc(const struct TEXEHeader header)
{
	long location = header._CS + (header._IP / 0x10);

	if (location<header._CS)
		return ((long)header.headersize + header._CS + header._IP/0x10)*0x10;
	else
		return ((long)header.headersize + header._CS) * 0x10;
}
long int exe_codeloc(const struct TEXEHeader header)
{
	long int location = header._CS + (header._IP / 0x10);

	if (location<header._CS)
		return exe_codesegloc(header) + (header._IP %0x10);
	else
		return exe_codesegloc(header) + header._IP;
}

/*********	CODE RELATED TO VIRUS CHECKING 	*****************/

long filesize(FILE *f)
{
	long curpos, fsize;
	curpos = ftell(f);
	fseek(f, 0, SEEK_END);
	fsize = ftell(f);
	fseek(f, curpos, SEEK_SET);

	return fsize;
}

int checkvirus(char *filename)
{
	int i;
	int *ptr;
	FILE *exefile;
	struct TEXEHeader header;
	char buff[300];
	long start;

	checked++;

	exefile = fopen(filename, "rb");
	if (exefile == NULL) {
		cprintf(" could not open file\n\r");
		return 1;
	}

	fread(&header, sizeof(header), 1, exefile);
	if (header.sign!=0x5a4d) {
		cprintf(" invalid exe file\n\r");
		return 1;
	}

/* The file is first checked for the virus signature */

	start = exe_codeloc(header);
	fseek(exefile, start, SEEK_SET);
	fread(buff, 16, 1, exefile);
	if (strncmp(buff, virus_sign, 200)!=0)
	  return 1;    /* The file is not infected */

/* The file is infected but we have to check if we can clean*/
	infected++;

	if (filesize(exefile)-start!=4000)
	{
	cprintf(" Cannot clean infected file.\n\r");
	return 1;
	}

/* The original header is stored in the virus signature encrypted
   Decrypt portion of the virus */

	ptr = (int*) &buff[0x66];
	for (i=0; i<12; i++)
	{
	*ptr = - *ptr; /* negate the values to decrypt */
	ptr+=2;
	}

/* Read the original exe file header */
	memcpy(&header, &buff[0x66], 24);
/* Put the original exe header back in it's place */
	fclose(exefile);
	exefile = fopen(filename, "rb+");
	fwrite(&header, sizeof(header), 1, exefile);
	fclose(exefile);

	cleaned++;
	cprintf(" Cleaned.\n\r");

/* The portion of truncating the virus is omitted from this program, it is required to make the file back to its original size, but the file is
still clean without doing it, as the virus is now disabled */

   return 0;
}

void searchdir(char *dir)
{
	char path[500];
	struct ffblk fileinfo;
	int result;
	char newname[500], drivename[10],dirname[400];
	char filename[10], fileext[5];
	strcpy(path,dir);
	strcat(path, "*.*");

	result = findfirst(path, &fileinfo, FA_DIREC|FA_ARCH);
	while (result==0)
	 {
	 strcpy(newname, dir);
	  strcat(newname, fileinfo.ff_name);

	  /* check if it is a directory and not "." and not ".."  */
	  if (((fileinfo.ff_attrib & FA_DIREC) !=0)
	     && (strcmp(fileinfo.ff_name, ".")!=0)
	     && (strcmp(fileinfo.ff_name, "..")!=0))
	      {
	      strcat(newname, "\\");
	      searchdir(newname);  /*Make rescursive call */
	    }
	    else
	     {
		fnsplit(newname, drivename, dirname, filename, fileext);
		if (strcmp(fileext, ".EXE")==0)
		 {
		delline();
		cprintf("\r%s - %c", newname,ch[counter]);
		counter=(counter+1)%4;
		checkvirus(newname);
		}
		}
		result = findnext(&fileinfo);
	}
}

void initialize()
{
	checked = 0;
	infected = 0;
	cleaned = 0;
}

void showresults()
{
	cprintf("\n\r");
	cprintf(" Total files checked :  %9ld\n\r", checked);
	cprintf(" Total files infected:  %9ld\n\r", infected);
	cprintf(" Total files cleaned :  %9ld\n\r", cleaned);
}

/*********	The main() function is given below	***********/

int main(int argc, char *argv[])
{
  counter=0;
  clrscr();
  cprintf("An Antivirus Program\n\r");
  cprintf("A scaled down version of MVK\n\r");
  cprintf("(c)1993 for MVK (Monir's Virus Killer) and\n\r");
  cprintf("(c)2002 for this program by Monirul Islam Sharif\n\r");
  cprintf("[This version is written only for the Diehard 2 virus]");
  cprintf("\n\n\r");

  if (argc!=2)
   {
	 cprintf("Invalid number of parameters\n\r");
	 cprintf("Please use:\n\r");
	 cprintf("   ANTIVIR <pathname> \n\r");
	 return 1;
    }

	initialize();
	searchdir(argv[1]);
	showresults();

return 0;
}

