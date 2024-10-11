#include <stdio.h>
#define MAXLINE 1000

int get_line(char cLine[], int maxline);
void append(char to[], char from[]);

int main() {
    int iLen; /* current line length */ 
    char cLine[MAXLINE]; /* current input line */ 
    char cLongest[MAXLINE] = ""; /* longest line saved here */
    
    while ((iLen = get_line(cLine, MAXLINE)) > 0) {
        if (iLen > 8) {
            append(cLongest, cLine);
        }
    }
    
    if (cLongest[0] != '\0') {
        printf("All the input lines that are longer than 8 characters:\n%s", cLongest);
    } else {
        printf("No lines longer than 8 characters were entered.\n");
    }

    return 0;
}

int get_line(char s[], int lim) {
    int c, i; 
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') { 
        s[i] = c; 
        ++i; 
    } 
    s[i] = '\0';
    return i;
}

void append(char to[], char from[]) {
    int i = 0, j = 0;
    
    // Find the end of the 'to' string
    while (to[i] != '\0') {
        i++;
    }
    
    // Append 'from' string to 'to' string
    while ((to[i++] = from[j++]) != '\0');
}

