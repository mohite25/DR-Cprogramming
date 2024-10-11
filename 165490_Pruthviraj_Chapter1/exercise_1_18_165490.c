/**this program will print all input lines that are longer than 8 characters and remove trailing blanks and tabs from each line of input, and to delete entirely blank lines. 
* Author : Pruthviraj 165490
* Created : 3 September 2024
*/

/**REQUIED HEADER FILES*/
#include <stdio.h>

/** MACRO DEFINITIONS */
#define MAXLINE 1000

/** FUNCTION PROTOTYPES */
int get_line (char cLine[], int maxline);
void append (char to[], char from[]);
void remove_whitespace(char line[]);
/*
 * main: prints all input lines that are longer than 8 characters,removes trailing blanks and tabs, and deletes entirely blank lines.
 */
int main()
{
    int iLen; /* current line length */ 
    char cLine[MAXLINE]; /* current input line */ 
    char cLongest[MAXLINE] = ""; /* longest line saved here */
    
    printf("will remove trailing blanks and tabs from each line of input, and to delete entirely blank lines.\n");

    while ((iLen = get_line(cLine, MAXLINE)) > 0) {
        remove_whitespace(cLine); 
        if (cLine[0] != '\0' && iLen > 8) { 
            append(cLongest, cLine);
        }
    }
    if (cLongest[0] != '\0') {
        printf("\nAll input lines longer than 8 characters:\n%s \n", cLongest);
    } else {
        printf("\nNo lines longer than 8 characters were entered.\n");
    }

    return 0;
}/*End main()*/

/**will read the input to the char cLine array and will return the length
* Author : Pruthviraj 165490
* Created : 3 September 2024
*/
int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = '\0';
    }else{
    	s[i] = '\0';
    } 
    return i;
}/*End get_line()*/

/**will append the line from cLine array and put it into the cLongest array
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
void append(char to[], char from[]) {
    int i = 0, j = 0;
    while (to[i] != '\0') {
        i++;
    }
    while ((to[i++] = from[j++]) != '\0');
}/*End append()*/

/**will removes trailing blanks and tabs from a line
* Author : Pruthviraj 165490
* Created : 3 September 2024
*/
void remove_whitespace(char line[]) {
    int i = 0;    
    while (line[i] != '\0') {
        i++;
    }
    i--;
    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
        i--;
    }
    line[i + 1] = '\0'; 
}/*End remove_whitespace()*/



