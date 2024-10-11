/**This program will prints its input one word per line
* Author : Pruthviraj 165490
* Created : 7 August 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
/**MACRO DEFINITIONS */
#define IN 1  /* inside a word */
#define OUT 0 /* outside a word */
/** MAIN PROGRAM */
/*
* main : this will read an input and put a newline to end of the word and you will get output that is one word per line
*/
int main() {
    int ic, istate;

    istate = OUT;
    printf("This program will give you output that is one word per line\n");
    //Read characters until End-of-file is detected.
    while ((ic = getchar()) != EOF) {
        if (ic == ' ' || ic == '\n' || ic == '\t') 
        {
        //if the character is blank or new line or tab.
            if (istate == IN)
             {
             //if you are inside a word
                putchar('\n'); // End of a word, print newline
                istate = OUT; //state will change and you wil be outside a word
            }
        } else 
        {
            putchar(ic); // Print the character
            istate = IN; //inside a word
        }
    }

    return 0;
}/* End main() */

