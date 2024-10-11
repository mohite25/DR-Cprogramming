/* function expand(s1,s2) that expands shorthand notations like a-z in 
the string s1 into the equivalent complete list abc...xyz in s2.
* Author : Pruthviraj 165490
* Created : 23 September 2024
*/
/*REQUIRED HEADER FILES*/
#include <stdio.h>

/*PREPROCESSOR DEFINITION*/
#define MAXLINE 100

/**FUNCTION PROTOTYPES*/
void mgetline(char cS[], int iLim);
void expand(char cS1[], char cS2[]);

/*
* main : user input will be in s1[] character array
*/
int main()
{
	char cS1[MAXLINE];			/*character array for user input*/
	char cS2[MAXLINE];			/*for Expanded input will*/
	
	printf("Expands shorthand notations like a-z in the string s1\n");
	mgetline(cS1, MAXLINE);		/*function will get characters from user and saves onto cS1[]*/
	expand(cS1, cS2);			/*function will expand what is in the cS1[] and saves it in the cS2[]*/
	printf("%s", cS2);
	return 0;
}/*End main()*/

/* will get input from user and will be in s1[] character array
* Author : Pruthviraj 165490
* Created : 23 September 2024
*/
void mgetline(char cS[], int iLim)
{
	int i;
	int iC;
	/*will last untill the size of the array and End - of - file indicator */
	for(i = 0; i < iLim -1 && (iC = getchar()) != EOF && iC != '\n'; ++i)
	{
		/*user characters will be saved in cS[]*/
		cS[i] = iC;
	}
	if (iC == '\n')
	{
		cS[i++] = iC;
	}
	cS[i] = '\0';
}/*End mgetline()*/


void expand(char cS1[], char cS2[])
{
	int i;
	int j; 
	int iC;
    i = j = 0;
    
    /*will last till Null character*/
    while ((iC = cS1[i++]) != '\0')
    {
    	/*will check for the range*/
        if (cS1[i] == '-' && cS1[i+1] >= iC)
        {
        	/*will increment to skip the '-'*/
            i++;
            /*will last till the whole range is complete*/
            while (iC < cS1[i])
            {
            	/*range will be saved into cS2[]*/
                cS2[j++] = iC++;
            }
        }
        else
        {	
        	
            cS2[j++] = iC;
        }
    }
    cS2[j] = '\0';
}/*End expand()*/


