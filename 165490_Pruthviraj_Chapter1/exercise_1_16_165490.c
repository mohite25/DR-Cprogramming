/**This will print the lomgest line so far and also print the size of that line
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
/**REQUIED HEADER FILES*/
#include <stdio.h>
/**MACRO DEFINITIONS*/
#define MAXLINE 1000
/**FUNCTION PROTOTYPES*/
int get_line (char cLine[], int maxline);
void copy (char to[], char from[]);
/*
* main: this will print the longest line by calling the get_line function and also print the length of it
*/
int main()
{
	int iLen; /* current line length */ 
	int iMax; /* maximum length seen so far */ 
	char cLine[MAXLINE]; /* current input line */
	char cLongest[MAXLINE]; /* longest line saved here */

	printf("will print the longest line so far with its size:\n");
	iMax = 0;
		while ((iLen = get_line(cLine, MAXLINE)) > 0 ){
    		//printf("%d %s", iLen, cLine);
    		if (iLen > iMax){
        		iMax = iLen;
        		copy (cLongest, cLine);
    		}
		}
		if (iMax > 0) {
			printf("\nLongest line so far with its size:\n");
    		printf("%d %s\n", iMax, cLongest);
		}
		getchar();
		return 0;
}/*End main()*/

/**will read the input to the char line array and will return the length
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
int get_line(char s[], int lim)
{
	int c, i, j;

	j = 0;
	for (i = 0; (c = getchar()) != EOF && c != '\n'; ++i){
	    if (i < lim-2){
	        s[j] = c;
	        ++j;
	    }
	    if (c == '\n'){
	        s[j] = c;
	        ++j;
	        ++i;
	    }
	}
    s[j] = '\0';
    return i;
}/*End get_line()*/

/**will copy the line from line array and put it into the longest array
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
void copy (char to[], char from[])
{
	int i;

	i = 0;
	while ((to[i] = from[i]) != '\0'){
    	++i;
    }
}/*End copy()*/
