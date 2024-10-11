/**This program will reverse the cLongest line among the input lines
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/

/**REQUIRED HEADER FILES*/
#include <stdio.h> 
#include <string.h>

/**MACRO DEFINITION*/
#define MAXLINE 1000 /* maximum input line Length */ 

/**FUNCTION PROTOTYPES*/
int get_line(char line[], int maxline); 
void copy(char to[], char from[]); 
void str_rev(char rev[]);

/*
* main: print the cLongest input line by reversing it
*/
int main() 
{ 
		int iLen; /* current line Length */ 
		int iMax; /* maximum Length seen so far */ 
		char cLine[MAXLINE]; /* current input line */ 
		char cLongest[MAXLINE]; /* cLongest line saved here */ 
		printf("This program will print the longest string available by reversing it\n");
		iMax = 0; 
		while ((iLen = get_line(cLine, MAXLINE)) > 0){ 
			if (iLen > iMax) { 
					iMax = iLen; 
					copy(cLongest, cLine); 
			}
		} 
		if (iMax > 0){ /* there was a line */ 
				str_rev(cLongest);
				printf("\nBy reversing the longest string:\n%s\n", cLongest); 
		}
		return 0; 
}/* End main() */

/**will read the input to the char cLine array and will return the length
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
int get_line(char s[],int lim) 
{ 
		int c, i; 
		for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
				s[i] = c; }
		if (c == '\n') { 
				s[i] = '\0'; 
		} else{
		s[i] = '\0'; 
		} 
		return i; 
}/* End get_line() */ 

/**will copy the line from cLine array and put it into the cLongest array
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
void copy(char to[], char from[]) 
{ 
		int i; 
		i = 0; 
		while ((to[i] = from[i]) != '\0') { 
				++i; }
				
}/* End copy() */

/**will // Swap characters from start and end until the middle of the string
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
void str_rev(char rev[])
{
    int i, j;
    char temp;
    i = 0;
    j = strlen(rev) - 1;  // Get the index of the last character

    while (i < j) {
        temp = rev[i];
        rev[i] = rev[j];
        rev[j] = temp;
        i++;
        j--;
    }
}/* End str_rev() */

 
