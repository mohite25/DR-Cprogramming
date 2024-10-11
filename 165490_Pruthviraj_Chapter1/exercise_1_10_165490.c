/**This program will replace escape sequences with its symbols
* Author : Pruthviraj 165490
* Created : 7 August 2024
*/
/** REQUIRED HEADER FILES*/
#include <stdio.h>
/**MAIN PROGRAM */
/* 
* main : will copy the input to the output and replaces escape sequence with its symbol
*/
int main()
{
	int ic;
	printf("This program will replaces escape sequence with its symbol\n");
	//Read characters until End-of-file (EOF) is detected.
	while((ic = getchar()) != EOF)
	{
		if(ic == '\t')
		{
		//if the character is tab.
			putchar('\\');
			putchar('t');
		}
		else if(ic == '\b')
		{
		//if the character is backspace
			putchar('\\');
			putchar('b');
		}
		else if(ic == '\\')
		{
		//if the character is backslash
			putchar('\\');
			putchar('\\');
		}
		else
		{
		//for any other character
			putchar(ic);
		}
	}
return 0;
}/* End main() */
