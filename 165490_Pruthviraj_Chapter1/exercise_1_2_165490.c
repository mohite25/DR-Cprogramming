/*
* This program is to find out the error when entering the wrong escape sequence
* Author: Pruthviraj 165490
* Created: 1 August 2024
*/
/** REQUIRED HEADER FILES*/
#include <stdio.h>

/** MAIN PROGRAM */
/* 
* main: Will print the string constant by calling the library function printf()
*/
int main()
{
	printf("Hello, World\c"); /** will throw warning about entring the wrong escape sequence*/

return 0;
}/* End main() */
