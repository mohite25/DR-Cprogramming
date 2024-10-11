/*This program will function itob(n,s,b) that converts the integer n into a base b character representation in the string s
* Author : Pruthviraj 165490
* Created : 26 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
#include <string.h>

/*FUNCTION PROTOTYPES*/
void itob(int n, char s[], int b);
/*
* main : itob(n,s,b) that converts the integer n into a base b character representation in the string s
*/
int main() {
    int iNumber, iBase;
    char cResult[20];

    printf("itob(n,s,b) that converts the integer n into a base b character representation in the string s\n");
    printf("Enter an integer: ");				/* Ask the user for a number */
    scanf("%d", &iNumber);

    
    printf("Enter the base (2 to 16): ");		/* Ask the user for the base*/
    scanf("%d", &iBase);

    
    itob(iNumber, cResult, iBase);				/* Convert the number and print the result*/
    printf("Number %d in base %d is: %s\n", iNumber, iBase, cResult);

    return 0;
}/*End main()*/

void itob(int n, char s[], int b) {
    if (b < 2 || b > 16) {
        printf("Base not supported. Please choose a base between 2 and 16.\n");
        return;
    }

    int i = 0, iSign = n;
    char cDigits[] = "0123456789ABCDEF";  /* Digits for base 16*/

    /* Handle negative numbers for base 10*/
    if (iSign < 0 && b == 10) {
        n = -n;
    }

    /* Convert number to the chosen base*/
    do {
        s[i++] = cDigits[n % b];
        n /= b;
    } while (n > 0);

    /* Add negative sign for base 10*/
    if (iSign < 0 && b == 10) {
        s[i++] = '-';
    }

    s[i] = '\0';  /* Null-terminate the string*/

    /* Reverse the string*/
    for (int j = 0, k = i - 1; j < k; j++, k--) {
        char temp = s[j];
        s[j] = s[k];
        s[k] = temp;
    }
}/*End itob()*/


