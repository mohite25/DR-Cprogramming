/*This program will convert the n numbers into the string 
* Author : Pruthviraj 165490
* Created : 24 september 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
#include <string.h>

/**FUNCTION PROTOTYPES*/
void itoa(int n, char s[]);
void reverse(char s[]);

/*
* main : will ask for the number from the user and will pass it to the itoa() function
*/
int main() {
    char buffer[100];				/*Buffer to store large numbers*/
    int number;						/*User defined numbers will be stored here*/

    printf("This program will convert n numbers into the string\n");								
    printf("Enter an integer: ");	/*User input for the number to convert*/
    scanf("%d", &number);

    
    itoa(number, buffer);			/*Call the itoa function*/
    printf("String representation: %s\n", buffer);

    return 0;
}/*End main()*/

/*will convert numbers to the string 
* Author : Pruthviraj 165490
* Created : 24 september 2024
*/
void itoa(int n, char s[]) {
    int i = 0;
    int sign = n; /* Record the original sign*/

    /* Special handling for the largest negative number*/
    unsigned int absValue; /* Using unsigned int to avoid overflow*/

    if (n < 0) {
        absValue = -n; /* Convert to positive using unsigned int*/
    } else {
        absValue = n;
    }

    /* Convert the absolute value of the number to a string in reverse order*/
    do {
        s[i++] = absValue % 10 + '0'; /* Get the next digit*/
    } while ((absValue /= 10) > 0); /* Continue until all digits are processed*/

    /* Add the negative sign if the original number was negative*/
    if (sign < 0) {
        s[i++] = '-';
    }

    s[i] = '\0'; /* Null-terminate the string*/

    /* Reverse the string to get the correct order*/
    reverse(s);
}/*End itoa()*/

void reverse(char s[]) {
    int i, j;
    char temp;

    for (i = 0, j = strlen(s) - 1; i < j; i++, j--) {
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
    }
}/*End reverse()*/

