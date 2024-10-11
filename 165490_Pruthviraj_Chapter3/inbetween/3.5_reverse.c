#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main() {
    char c[100];  // Define a char array with size 100
    int i = 0;

    // Read characters from input until newline is encountered
    while ((c[i] = getchar()) != '\n' && i < sizeof(c) - 1) {
        i++;
    }
    c[i] = '\0';  // Null-terminate the string

    reverse(c);  // Reverse the string in place

    return 0;
}

/* reverse: reverse string s in place */ 
void reverse(char s[]) { 
    int c, i, j;
    int length = strlen(s);
    
    // Swap characters from both ends to reverse the string
    for (i = 0, j = length - 1; i < j; i++, j--) { 
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }

    // Print the reversed string
    printf("\nReversed string: %s\n", s);
}

