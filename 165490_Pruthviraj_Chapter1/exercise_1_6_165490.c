/**This program will print the result 1 or 0 by evaluating whether there is EOF or not.
* Author : Pruthviraj 165490
* Created : 5 August 2024
*/
/**REQUIRED HEADER FILE*/
#include <stdio.h>
/**MAIN PROGRAM*/
/*
* main : it will print whether there is EOF or not.
*/
int main() {
    int c;
    printf("This program is to evalute the expression \"getchar() != EOF\"\n");
    c = (getchar() != EOF);  // Evaluate the expression
    printf("%d\n", c);  // Print the result (0 or 1)
    return 0;
}/** End main() */

