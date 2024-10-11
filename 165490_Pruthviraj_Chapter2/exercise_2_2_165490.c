/* This will use if else rather than using "&&" and "||"
* Author : Pruthviraj 165490
* Created : 6 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DFINITION*/
#define MAXLINE 1000  /* Maximum size of the input line */

/*
* main : will print the input 
*/
int getline_custom(char s[], int lim);

int main() {
    char cLine[MAXLINE];
    int iLen;

    /* Get the line input from the user and store it in 'line'*/
    iLen = getline_custom(cLine, MAXLINE);

    /* Print the retrieved line*/
    if (iLen > 0) {
        printf("Input line: %s\n", cLine);
    }

    return 0;
}/*End main()*/

int getline_custom(char s[], int lim) {
    int i = 0;
    int iC;

    while (i < lim - 1) {  /* Ensure there is space for the character */
        iC = getchar();     

        if (iC == '\n') {   /* Check for newline character*/
            break;
        }

        if (iC == EOF) {    /* Check for end-of-file (EOF)*/
            break;
        }

        s[i] = iC;  /* Store the character in the array*/
        ++i;
    }

    s[i] = '\0';  /* Null-terminate the string */
    return i;     /* Return the length of the line */
}/*End getline_custom*/

