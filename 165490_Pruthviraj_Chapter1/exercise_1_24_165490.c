/*Program to check rudimentary syntax errors like un-match braces, brackets or parenthesis.
* Author : Pruthviraj 165490
* Created : 4 September
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**FUNCTION PROTOTYPES*/
void incomment();
void inquote(int c);
void search(int c);
int brace, brack, paren;

/*
* main : will count the braces, brackets or parenthesis and will print the un-matched
*/
int main(void) {
    int c;
	
	printf("This program will check rudimentary syntax errors like un-matched braces, brackets or parenthesis\n");
	printf("Enter your code\n");
    extern int brace, brack, paren;

    while ((c = getchar()) != EOF)
        if (c == '/')
            if ((c = getchar()) == '*')
                incomment();
            else
                search(c);
        else if (c == '\'' || c == '"')
            inquote(c);
        else
            search(c);

    if (brace < 0) {
        printf("Unmatched Braces\n");
        brace = 0;
    } else if (brack < 0) {
        printf("Unmatched brackets\n");
        brack = 0;
    } else if (paren < 0) {
        printf("Unmatched parenthesis\n");
        paren = 0;
    }

    if (brace > 0)
        printf("Unmatched braces\n");
    else if (brack > 0)
        printf("Unmatched brackets\n");
    else if (paren > 0)
        printf("Unmatched parenthesis\n");

    return 0;
}/*End main()*/

/*will pass the character to the d except '*' and '/'
* Author : Pruthviraj 165490
* Created : 4 September
*/
void incomment() {
    int c, d;

    c = getchar();
    d = getchar();

    while (c != '*' || d != '/') {
        c = d;
        d = getchar();
    }
}/*End incomment()*/

/*will print the d if d == '\\' means the comment has ended
* Author : Pruthviraj 165490
* Created : 4 September
*/
void inquote(int c) {
    int d;

    putchar(c);

    while ((d = getchar()) != c)
        if (d == '\\')
            getchar();
}/*End inquote()*/

/*if the character is braces, brackets or parenthesis it will decrement it
* Author : Pruthviraj 165490
* Created : 4 September
*/
void search(int c) {
    extern int brace, brack, paren;

    if (c == '{')
        --brace;
    else if (c == '}')
        ++brace;
    else if (c == '[')
        --brack;
    else if (c == ']')
        ++brack;
    else if (c == '(')
        --paren;
    else if (c == ')')
        ++paren;
}/*End search()*/
