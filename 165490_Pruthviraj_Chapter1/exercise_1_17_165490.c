/**Write a program to print all input lines that are longer than 8 characters. 
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
/**REQUIED HEADER FILES*/
#include <stdio.h>
/**MACRO DEFINITIONS*/
#define MAXLINE 1000
/**FUNCTION PROTOTYPES*/
int get_line (char cLine[], int maxline);
void append (char to[], char from[]);
/*
* main: this will print all input lines that are longer than 8 characters.
*/
int main()
{
	int iLen; /* current line length */ 
	char cLine[MAXLINE]; /* current input line */ 
	char cLongest[MAXLINE] = ""; /* longest line saved here */
	
	printf("will print all input lines that are longer than 8 characters\n");

		while ((iLen = get_line(cLine, MAXLINE)) > 0){
        if (iLen > 8) {
            append(cLongest, cLine);
        }
    }
		
		if (cLongest[0] != '\0') {
        printf("\nAll the input lines that are longer than 8 characters:\n%s", cLongest);
    } else {
        printf("\nNo lines longer than 8 characters were entered.\n");
    }

		return 0;
}/*End main()*/

/**will read the input to the char line array and will return the length
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
int get_line(char s[], int lim) {
    int c, i; 
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') { 
        s[i] = '\n';
        ++i; 
    }
    s[i] = '\0'; 
    
    
    return i;
}/*End get_line()*/

/**will copy the line from line array and put it into the longest array
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
void append(char to[], char from[]) {
    int i = 0, j = 0;
    
    // Find the end of the 'to' string
    while (to[i] != '\0') {
        i++;
    }
    
    // Append 'from' string to 'to' string
    while ((to[i++] = from[j++]) != '\0');
}/*End copy()*/
