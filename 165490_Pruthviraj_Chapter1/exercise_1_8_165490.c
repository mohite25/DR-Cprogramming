/**This program will count Blanks, Tabs and new lines
* Author : Pruthviraj 165490
* Created : 5 August 2024
*/
/**REQUIRED HEADER FILE*/
#include <stdio.h>
/**MAIN PROGRAM*/
/*
* main : it will count the number of blanks, tabs and new lines from the user input.
*/
int main()
{
	int iblanks = 0; //declaring and initializing the variable to hold the counts of the blank
	int itabs = 0; //declaring and initializing the variable to hold the counts of the tabs
	int inewLines = 0; //declaring and initializing the variable to hold the counts of the new line
	double c;
	printf("This program will count Blanks, Tabs and New lines\n");
	while((c = getchar()) != EOF)
	{
		if(c == ' ')
		{
			++iblanks;
		}
		else if(c == '\t')
		{
			++itabs;
		}
		else if(c == '\n')
		{
			++inewLines;
		}
	}
	
	printf("\nThis input contains:\n%d Blanks\n%d Tabs &\n%d New Lines\n", iblanks, itabs, inewLines);


return 0;
}/**End main() */
