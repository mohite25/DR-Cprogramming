/*determine the ranges of char, short, int, and long variables, both signed and unsigned,
  by printing appropriate values from standard headers
* Author : Pruthviraj 165490
* Created : 5 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
#include <limits.h>

/*
* main : will print the size of the data types including signed and unsigned from standard headers
*/
int main() {
    printf("CHAR_BIT %d bits in a char\n", CHAR_BIT);
    printf("CHAR_MAX %d, UCHAR_MAX %u, or SCHAR_MAX %d - maximum value of char\n", CHAR_MAX, UCHAR_MAX, SCHAR_MAX);
    printf("CHAR_MIN %d, or SCHAR_MIN %d - minimum value of char\n", CHAR_MIN, SCHAR_MIN);
    printf("INT_MAX %d - maximum value of int\n", INT_MAX);
    printf("INT_MIN %d - minimum value of int\n", INT_MIN);
    printf("LONG_MAX %ld - maximum value of long\n", LONG_MAX);
    printf("LONG_MIN %ld - minimum value of long\n", LONG_MIN);
    printf("SCHAR_MAX %d - maximum value of signed char\n", SCHAR_MAX);
    printf("SCHAR_MIN %d - minimum value of signed char\n", SCHAR_MIN);
    printf("SHRT_MAX %d - maximum value of short\n", SHRT_MAX);
    printf("SHRT_MIN %d - minimum value of short\n", SHRT_MIN);
    printf("UCHAR_MAX %u - maximum value of unsigned char\n", UCHAR_MAX);
    printf("UINT_MAX %u - maximum value of unsigned int\n", UINT_MAX);
    printf("ULONG_MAX %lu - maximum value of unsigned long\n", ULONG_MAX);
    printf("USHRT_MAX %u - maximum value of unsigned short\n", USHRT_MAX);

    return 0;
}/*End main()*/

