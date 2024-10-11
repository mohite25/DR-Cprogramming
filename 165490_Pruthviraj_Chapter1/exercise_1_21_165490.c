/**Write a program entab that replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DEFINITIONS*/
#define TAB_WIDTH 4  

/**FUNCTION PROTYPES*/
void entab(int tab_width);

/*
* main: Write a program entab that replaces strings of blanks 
		by the minimum number of tabs and blanks to achieve the same spacing by calling the entab() function
*/
int main() {
	printf("replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.\n");
    printf("Enter text:\n");
    entab(TAB_WIDTH);
    return 0;
}/**End main() */

/**replaces strings of blanks by the minimum number of tabs and blanks to achieve the same spacing.
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
void entab(int iTab_width) {
    int iC;               
    int iColumn = 0;       
    int iSpace_count = 0;  

    while ((iC = getchar()) != EOF) {
        if (iC == ' ') {
            iSpace_count++;  /* Count consecutive spaces*/
        } else {
            /* When a non-space character is encountered, process the collected spaces*/
            if (iSpace_count > 0) {
                /* Calculate how many tabs and spaces are needed to replace the spaces */
                int iTabs = (iColumn + iSpace_count) / iTab_width - iColumn / iTab_width;
                int iSpaces = (iColumn + iSpace_count) % iTab_width;

                /* Print the required number of tabs*/
                for (int i = 0; i < iTabs; i++) {
                    putchar('\t');
                    iColumn += iTab_width - (iColumn % iTab_width);
                }

                /* Print the remaining spaces*/
                for (int i = 0; i < iSpaces; i++) {
                    putchar(' ');
                    iColumn++;
                }

                iSpace_count = 0; 
            }

            /* Print the non-space character*/
            putchar(iC);

            /* Update column position*/
            if (iC == '\n') {
                iColumn = 0;  /* Reset column position after a newline */
            } else {
                iColumn++;  /* Otherwise, increment column */
            }
        }
    }

    /* Handle any remaining spaces at the end of the input*/
    if (iSpace_count > 0) {
        int iTabs = (iColumn + iSpace_count) / iTab_width - iColumn / iTab_width;
        int iSpaces = (iColumn + iSpace_count) % iTab_width;

        for (int i = 0; i < iTabs; i++) {
            putchar('\t');
            iColumn += iTab_width - (iColumn % iTab_width);
        }

        for (int i = 0; i < iSpaces; i++) {
            putchar(' ');
        }
    }
}/**End entab()*/

