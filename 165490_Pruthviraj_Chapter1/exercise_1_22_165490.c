/**"fold" long input cLines into two or more shorter cLines after the last non-blank character that occurs
before the n-th column of input. 
* Author : Pruthviraj 165490
* Created : 4 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DEFINITIONS*/
#define MAXCOL 35                           /* folded cLine length */
#define TABVAL 8                            /* standard tab length */
#define CURTAB(c) (TABVAL - ((c) % TABVAL)) /* current tab size */
#define NO_BLANK -1                         /* signifies no blank found */

/**FUNCTION PROTOTYPES*/
int iLastblank(const char cArr[], int iLen);

/* folds long input cLines into two or more shorter cLines */
int main() {
    int iC;                 /* character variable */
    int i, j;               /* indexing variable(s) */
    int iPos;               /* current iPosition in cArray */
    int iCol;               /* current column of output */
    int iLbc;               /* last blank character iPosition */
    char cLine[MAXCOL + 1]; /* fold cArray */

	printf("Will fold long input lines into two or more shorter lines after the last non-blank character that occurs\n");
    iPos = iCol = 0;
    while ((iC = getchar()) != EOF) {
        /* process cLine cArray, keep track of cLine length by columns */
        cLine[iPos++] = iC;
        iCol += (iC == '\t') ? CURTAB(iCol) : 1;

        /* create fold */
        if (iCol >= MAXCOL || iC == '\n') {
            cLine[iPos] = '\0';

            if ((iLbc = iLastblank(cLine, iPos)) == NO_BLANK) {
                /* split word if no blank characters */
                for (i = 0; i < iPos; ++i)
                    putchar(cLine[i]);
                /* reset column value and cArray iPosition */
                iCol = iPos = 0;
            } else {
                /* print cArray up until last blank character */
                for (i = 0; i < iLbc; ++i)
                    putchar(cLine[i]);
                /* feed remaining characters into buffer */
                for (i = 0, j = iLbc + 1, iCol = 0; j < iPos; ++i, ++j) {
                    cLine[i] = cLine[j];
                    /* set new column value */
                    iCol += (iC == '\t') ? CURTAB(iCol) : 1;
                }
                /* set cArray iPosition after remaining characters */
                iPos = i;
            }
            /* finish folded cLine with newcLine character */
            putchar('\n');
        }
    }

    return 0;
}/*End main()*/

/* finds the last whitespace character in an cArray
   and returns the iPosition */
int iLastblank(const char cArr[], int iLen) {
    int i, iLbc;

    iLbc = -1;
    for (i = 0; i < iLen; ++i)
        if (cArr[i] == ' ' || cArr[i] == '\t' || cArr[i] == '\n')
            iLbc = i;

    return iLbc;
}/*End iLastblank()*/
