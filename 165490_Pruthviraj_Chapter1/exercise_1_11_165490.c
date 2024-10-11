/**This program will count the words, lines and character from the input
* Author : Pruthiraj 165490
* created : 7 August 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h> 
/** MACRO DEFINITIONS*/
#define IN 1 /* inside a word */ 
#define OUT 0 /* outside a word */ 
/** MAIN PROGRAM */
/* 
* main : will count the lines, words and characters in input 
*/
int main() 
{ 
	int ic, inl, inw, inc, istate; 
	istate = OUT; 
	inl = inw = inc = 0;
	printf("This program will count lines, words and characters in input\n"); 
	//Read characters until End-of-file (EOF) is detected.
		while ((ic = getchar()) != EOF) 
		{ 
		//if new character
		++inc; 
		if (ic == '\n') 
		{
		//if character is newline character (escape sequence)
			++inl; }
		if (ic == ' ' || ic == '\n' || ic == '\t') 
		{
		//if character is blank or new line or tab.
		istate = OUT; }
		else if (istate == OUT) 
		{
		//only if state is out 
		istate = IN; //State will change to IN
		++inw; 
		}
		//putchar(c);
		} 
		printf("\nlines: %d\nwords %d\nchar %d\n", inl, inw, inc); 
				
return 0;			
			
 } /* End main() */
