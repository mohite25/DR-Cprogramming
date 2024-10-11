/**Write a program to print all input lines that are longer than 8 characters. 
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
* main: this will print all input lines that are longer than 8 characters.
*/
int main()
{
	int iLen; /* current line length */ 
	char cLine[MAXLINE]; /* current input line */ 
	char cLongest[MAXLINE]; /* longest line saved here */
	int index = 0;

		while (iLen = get_line(cLine, MAXLINE)){
			if(iLen > 8)
			{
        		copy (cLongest, cLine); 
				index += iLen;
        	}
		}
		
		if(index != 0){
			index++;
			cLongest[index] = '\0';
			printf("All the input characters that are longet than 8 Character: \n");
				for(int i = 0; cLongest[i] != '\0'; ++i) {
        			printf("%c", cLongest[i]);	
        		}
    	}
    	printf("\n");

		return 0;
}/*End main()*/

/**will read the input to the char line array and will return the length
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
int get_line(char s[], int lim)
{
	int c, i; 
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c != '\n'; ++i) {
			s[i] = c; }
	if (c == '\n') { 
		s[i] = c; 
		++i; 
	} 
    return i;
}/*End get_line()*/

/**will copy the line from line array and put it into the longest array
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
void copy (char to[], char from[])
{
	int i; //counter;
	i = 0;
	//counter = 0;
	
		while ((to[i] = from[i]) != '\n'){
    		++i;
    		//counter += i;
    	}
}/*End copy()*/


