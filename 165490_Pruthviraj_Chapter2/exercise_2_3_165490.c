/*This program will convert hexadecimal values to decimal values
* Author : Pruthviraj 165490
* Created : 6 September
*/
/**REQUIRED HEADERFILES*/
#include <stdio.h>
#include <ctype.h>

/**FUNCTION PROTOTYPES*/
int htoi(const char s[]);

/*
* main : this will convert the hexadeciml valued to decimal values
*/
int main() {
    char hex[100];

    /* Take hexadecimal input from user*/
    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    /* Convert hex to integer*/
    int iResult = htoi(hex);
    
    if (result != -1) {
        printf("Hexadecimal %s is %d in decimal\n", hex, iResult);
    }

    return 0;
}/*End main()*/

int htoi(const char s[]) {
    int i = 0, iValue = 0;

    /* Skip optional 0x or 0X prefix */
    if (s[0] == '0' && (s[1] == 'x' || s[1] == 'X')) {
        i = 2;
    }

    /* Loop through each character in the string*/
    for (; s[i] != '\0'; i++) {
        if (isdigit(s[i])) {
            /* Convert '0'-'9' to 0-9 */
            iValue = iValue * 16 + (s[i] - '0');
        } else if (s[i] >= 'a' && s[i] <= 'f') {
            /* Convert 'a'-'f' to 10-15 */
            iValue = iValue * 16 + (s[i] - 'a' + 10);
        } else if (s[i] >= 'A' && s[i] <= 'F') {
            /* Convert 'A'-'F' to 10-15 */
            iValue = iValue * 16 + (s[i] - 'A' + 10);
        } else {
            /* Invalid character for hexadecimal */
            printf("Error: '%c' is not a valid hex digit.\n", s[i]);
            printf("Please enter a valid hex number.\n");
            return -1;
        }
    }

    return iValue;
}/*End htoi()*/
