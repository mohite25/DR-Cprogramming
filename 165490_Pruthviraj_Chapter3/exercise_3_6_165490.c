/*This program will convert a number into a string with a minimum field width
* Author : Pruthviraj 165490
* Created : 26 September 2024
*/

/**REQUIRED HEADER FILES*/
#include <stdio.h>
#include <string.h>

/** FUNCTION PROTOTYPES */
void itoa(int n, char s[], int min_width);
void reverse(char s[]);

/*
 * main: will ask for the number and the minimum field width from the user
 */
int main() {
    char cBuffer[100];      /* Buffer to store large numbers */
    int iNumber;            /* User-defined number */
    int iWidth;             /* Minimum field width */

    printf("This program will convert a number into a string with a minimum field width\n");
    printf("Enter an integer: ");   /* Prompt user for an integer */
    scanf("%d", &iNumber);
    printf("Enter the minimum field width: ");  /* Prompt user for minimum field width */
    scanf("%d", &iWidth);

    itoa(iNumber, cBuffer, iWidth);  /* Call the itoa function with number and width */
    printf("String representation: '%s'\n", cBuffer);  /* Display string with spaces for clarity */

    return 0;
}/*End main()*/

/* itoa: Convert an integer n to a string in s with minimum field width */
void itoa(int n, char s[], int min_width) {
    int i = 0;               /* Index for string */
    int iSign = n;            /* Record the original sign of the number */
    unsigned int iAbsValue;    /* Unsigned integer to handle the absolute value */

    /* If the number is negative, convert it to positive */
    if (n < 0) {
        iAbsValue = -n;       /* Make n positive using unsigned int */
    } else {
        iAbsValue = n;        /* No change needed if number is already positive */
    }

    /* Convert the absolute value of the number to a string (stored in reverse) */
    do {
        s[i++] = iAbsValue % 10 + '0';  /* Extract the next digit */
    } while ((iAbsValue /= 10) > 0);    /* Continue until the number becomes 0 */

    /* Add the negative sign if the original number was negative */
    if (iSign < 0) {
        s[i++] = '-';         /* Append the minus sign */
    }

    s[i] = '\0';              /* Null-terminate the string */

    reverse(s);               /* Reverse the string to correct the order */

    /* Calculate the length of the current string and compare with minimum width */
    int iLen = strlen(s);
    if (iLen < min_width) {     /* If the string is shorter than the minimum width */
        /* Shift the characters to the right to make space for leading spaces */
        for (i = iLen; i >= 0; i--) {
            s[i + (min_width - iLen)] = s[i];  /* Shift by the difference in lengths */
        }

        /* Fill the leading positions with spaces */
        for (i = 0; i < (min_width - iLen); i++) {
            s[i] = ' ';        /* Add space */
        }
    }
}/*End itoa()*/

/* reverse: Reverses a string s in place */
void reverse(char s[]) {
    int i, j;
    char temp;

    /* Use two pointers, one starting at the beginning and the other at the end */
    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];           /* Swap the characters */
        s[i] = s[j];
        s[j] = temp;
    }
}/*End reverse()*/

