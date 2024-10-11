#include <stdio.h>

unsigned int rightrot(unsigned int x, int n) {
    int wordlength = sizeof(x) * 8; // Get the number of bits (32 for unsigned int)

    // Loop to perform the right rotation n times
    for (int i = 0; i < n; i++) {
        unsigned int rightmost_bit = x & 1;   // Extract the rightmost bit
        x = x >> 1;                           // Right shift x by 1
        x = x | (rightmost_bit << (wordlength - 1));  // Put the rightmost bit at the leftmost position
    }
    
    return x;  // Return the rotated result
}

int main() {
    unsigned int x;  // Variable to hold the input number
    int n;           // Variable to hold the number of positions to rotate

    // Take input from user
    printf("Enter the decimal value of x: ");
    scanf("%u", &x);
    
    printf("Enter the number of positions to rotate by: ");
    scanf("%d", &n);

    // Perform the right rotation
    unsigned int result = rightrot(x, n);

    // Output the result in decimal
    printf("Rotated result (in decimal): %u\n", result);

    return 0;
}

