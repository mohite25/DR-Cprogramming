/**This program will Write a function escape(s,t) that converts characters like newline and tab 
into visible escape sequences like \n and \t as it copies the string t to s
*Author : Pruthviraj 165490
* Created : 18 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DEFINITIONS*/
#define MAXLINE 1000

/**FUNCTION PROTOTYPES*/
int mgetline(char cLine[], int iMaxline);
void escape(char cS[], char iT[]);

/*
* main : will convert characters in to the visible escape sequences
*/
int main() {
    char cS[MAXLINE];			/*Our main Character array where user will enter input*/
    char cT[MAXLINE];			/*string with the visible sequence will be copied here*/
    printf("converts characters like newline and tab into visible escape sequences like \\n and \\t\n");

    mgetline(cT, MAXLINE);		/*will be entering the character of strings from user*/

    escape(cS, cT);				/*will convert the sequence into the visible one and put it into the cS[]*/

    printf("%s\n", cS);			/*will print the output*/

    return 0;
}/*End main()*/

/**escape(s,t) : converts characters like newline and tab 
into visible escape sequences like \n and \t as it copies the string t to s
*Author : Pruthviraj 165490
* Created : 18 September 2024
*/
void escape(char cS[], char cT[]) {
    int i, j;

    i = j = 0;

	/*will last till it founds Null character*/
    while (cT[i] != '\0') {
        switch (cT[i]) {
        /*if entered character is '\t' then "\t" will be put*/
        case '\t':				
            cS[j] = '\\';
            ++j;
            cS[j] = 't';
            break;
		/*if entered character is '\n' then "\n" will be put*/
        case '\n':
            cS[j] = '\\';
            ++j;
            cS[j] = 'n';
            break;
		/*if any of the above is not fulfilled then defaul will take place*/
        default:
            cS[j] = cT[i];
            break;
        }
        ++i;					
        ++j;
    }

    cS[j] = '\0';				/*Null terminated*/  
}/*End escape()*/

int mgetline(char cS[], int iLim) {
    int i; 
    int iC;

    for (i = 0; i < iLim - 1 && (iC = getchar()) != EOF; ++i)
        cS[i] = iC;

    cS[i] = '\0';				/*Null terminated*/
}/*End mgetline()*/
