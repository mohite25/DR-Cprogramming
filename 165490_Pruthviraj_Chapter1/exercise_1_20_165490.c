/**will replaces tabs in the input with the proper number of blanks to space to the next tab stop
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DEFIITIONS*/
#define TAB_WIDTH 4

/**FUNCTION PROTOTYPES*/
void detab(int iTab_width);
/*
* main: replaces tabs in the input with the proper number of blanks to space to the next tab stop by calling detab() function
*/
int main() {
	printf("replaces tabs in the input with the proper number of blanks to space to the next tab stop\n");
    printf("Enter text:\n");
    detab(TAB_WIDTH);
    return 0;
}/*End main()*/

/**will replaces tabs in the input with the proper number of blanks to space to the next tab stop
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
void detab(int iTab_width) {
    int iC;               
    int iColumn = 0;       

    while ((iC = getchar()) != EOF) {
        if (iC == '\t') {  /* If the character is a tab*/
            int iSpaces = iTab_width - (iColumn % iTab_width);  /* Calculate the number of spaces needed */
            for (int i = 0; i < iSpaces; i++) {
                putchar(' ');
                iColumn++;      /* Update column position for each space printed */
            }
        } else {
            putchar(iC);
            iColumn++;  
            if (iC == '\n') {   /* Reset the column counter when a newline is encountered */
                iColumn = 0;
            }
        }
    }
}/*End detab()*/

