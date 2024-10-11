/*Program to remove comments from a C Program ,should echo quotes and character constants properly, C comments do not nest
* Author : Pruthviraj 165490
* created : 4 September
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**FUNCTION PROTOTYPES*/
void rcomment(int c);
void incomment(void);
void echo_quote(int c);

/*
* main: remove comments from a C Program ,should echo quotes and character constants properly, C comments do not nest
*/
int main(void) {
    int c, d;

    printf(" To Check /* Quoted String */ \n");

    while ((c = getchar()) != EOF)
        rcomment(c);

    return 0;
}/*End main()*/

/*will check it if the comment block is started or not and will remove it
* Author : Pruthviraj 165490
* created : 4 September
*/
void rcomment(int c) {
    int d;

    if (c == '/') {
        if ((d = getchar()) == '*')
            incomment();
        else if (d == '/') {
            putchar(c);
            rcomment(d);
        } else {
            putchar(c);
            putchar(d);
        }
    } else if (c == '\'' || c == '"')
        echo_quote(c);
    else
        putchar(c);
}/*End rcomment()*/

/*will check it if the comment block is started or not and will remove it
* Author : Pruthviraj 165490
* created : 4 September
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

/*will check it if the comment block is started or not and replaces the comment lines
* Author : Pruthviraj 165490
* created : 4 September
*/
void echo_quote(int c) {
    int d;

    putchar(c);

    while ((d = getchar()) != c) {
        putchar(d);

        if (d == '\\')
            putchar(getchar());
    }
    putchar(d);
}/*End echo_quote()*/

