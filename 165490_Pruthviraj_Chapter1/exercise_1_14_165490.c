/**This program will print a histogram of the frequencies of character from its input
* Author : Pruthviraj 165490
* Created : 30 August 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
/**MACRO DEFINITIONS*/
#define ASCII_SIZE 128
/**MAIN PROGRAM*/
/*
* main : this will print a '*' symbol of the frequencies of character from its input 
*/
int main()
{
	int ic;
	int char_count[ASCII_SIZE] = {0};
	int i;
	int j;
	
	printf("This program will print a histogram of the frequencies of character from its input\n");
	printf("Enter the sentence: \n");
	
	while ((ic = getchar()) != EOF){
		if(ic >= 0 && ic <= 127)
			++char_count[ic];
		}
	
	
	printf("\nprint character frequence Histogram\n");
	for (i = 0; i < ASCII_SIZE; ++i)
	{
		if(char_count[i] > 0){
			if(i == ' '){
				printf("' ' (space) | ");
			}
			else if(i == '\n'){
				printf("'\\n' (new line) | ");
			}
			else if(i == '\t'){
				printf("'\\t' (Tab) | ");
			}
			else if(i >= 0 && i <= 126){
				printf("%c | ", i);
			}
				
	/*this loop will print a '*' for the repetitive character of the sentence */
			for (j = 0; j < char_count[i]; ++j){
					printf("*");
			}
				putchar('\n');
		}
	
	}
	
return 0;
}/*End main()*/
