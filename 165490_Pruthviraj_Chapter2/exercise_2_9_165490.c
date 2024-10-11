#include <stdio.h>

int bitcount(unsigned x);

int main() {
    unsigned int x; // Variable to hold the input number

    // Take input from user
    printf("Enter the decimal value of x: ");
    scanf("%u", &x);

    // Perform the bit counting
    int result = bitcount(x);

    // Output the result in decimal
    printf("Number of 1-bits: %d\n", result);

    return 0;
}/*End main()*/
int bitcount(unsigned x) {
    int b = 0; // Initialize bit counter
    while (x != 0) {
        x &= (x - 1); // Clear the rightmost 1-bit
        b++;         // Increment the counter
    }
    return b; // Return the number of 1-bits
}

