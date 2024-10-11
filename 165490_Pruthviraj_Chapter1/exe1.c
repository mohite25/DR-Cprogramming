#include <stdio.h>

/** MACRO DEFINITIONS */
#define MAXLINE 1000

/** FUNCTION PROTOTYPES */
int get_line (char cLine[], int maxline);
void append (char to[], char from[]);
void remove_trailing_whitespace(char line[]);

/*
 * main: prints all input lines that are longer than 8 characters,
 *       removes trailing blanks and tabs, and deletes entirely blank lines.
 */
int main()
{
    int iLen; /* current line length */ 
    char cLine[MAXLINE]; /* current input line */ 
    char cLongest[MAXLINE] = ""; /* longest line saved here */

    while ((iLen = get_line(cLine, MAXLINE)) > 0) {
        remove_trailing_whitespace(cLine); // Remove trailing whitespace
        if (cLine[0] != '\0' && iLen > 8) { // Skip empty lines
            append(cLongest, cLine); // Append if line length > 8
        }
    }

    if (cLongest[0] != '\0') {
        printf("\nAll input lines longer than 8 characters:\n%s \n", cLongest);
    } else {
        printf("\nNo lines longer than 8 characters were entered.\n");
    }

    return 0;
}

/** get_line: reads input into the cLine array and returns its length */
int get_line(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c; // Keep the newline character
        ++i;
    }
    s[i] = '\0'; // Null-terminate the string
    return i;
}

/** append: appends the 'from' string to the 'to' string */
void append(char to[], char from[]) {
    int i = 0, j = 0;

    // Find the end of the 'to' string
    while (to[i] != '\0') {
        i++;
    }

    // Append 'from' string to 'to' string
    while ((to[i++] = from[j++]) != '\0');
}

/** remove_trailing_whitespace: removes trailing blanks and tabs from a line */
void remove_trailing_whitespace(char line[]) {
    int i = 0;
    
    // Find the position of the null terminator
    while (line[i] != '\0') {
        i++;
    }

    // Move backward from the end of the string to remove spaces and tabs
    i--;  // Start from the character before the null terminator

    while (i >= 0 && (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')) {
        i--;
    }

    // Place a new null terminator after the last non-whitespace character
    line[i + 1] = '\0';
}

