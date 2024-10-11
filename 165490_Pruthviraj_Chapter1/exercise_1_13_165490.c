/**This program will make a histogram for word length
* Author : Puthviraj 165490
* Created : 30 August 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
/** MAIN PROGRAM */
/*
* main : this will processes the sentence and prints a '*' symbol for each character in a word, then moves to the new line for each word
*/
int main() {
    int ic;
	printf("This program will print a histogram of the lengths of words in its input\n");
    printf("Enter a sentence: \n");
    
	/*Reads character until End-of-file is detected. */
    while ((ic = getchar()) != EOF) {
        if (ic == ' ' || ic == '\n' || ic == '\t') {
            putchar('\n'); /* if the character is a whitespace it will put an new line character*/
            while((ic = getchar()) == ' ' || ic == '\n' || ic == '\t'); /*Skip over any consecutive spaces, newlines, or tabs*/
        }
        if (ic != EOF)
        {
        putchar('*'); /*will print '*' for each character that is part of a word*/
        }
    }
    
    return 0;
}/* End main() */
