/*this program will deletes any character in s1 that matches any character in the string s2
* Author : Pruthviraj 165490
* Created : 9 Setember 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**MACRO DEFINITION*/
#define MAXLEN 1000

/**FUNCTION PROTOTYPES*/
void squeeze(char s1[], char s2[]);

/*
* main: this will get two different strings of input from the user
*/
int main()
{
		char cString_one[MAXLEN]; /*1st string input*/
		char cString_two[MAXLEN]; /*2nd string input*/
	
		int iC;
		int j = 0;
		int i = 0;
		
		printf("Enter The first String\n");
		/*Will get input untill newline is encountered */
		while((iC = getchar()) != '\n' && i < MAXLEN - 1)
		{
				cString_one[i] = iC;
				i++;
		}
		/*Null - terminate the string*/
		cString_one[i] = '\0';
	
		printf("Enter The Second String\n");
		/*Will get input untill newline is encountered*/
		while((iC = getchar()) != '\n' && j < MAXLEN - 1) 
		{
				cString_two[j] = iC;
				j++;
		}
		/*Null - terminate the string*/
		cString_two[j] = '\0';
		
		/*functio calling*/
		squeeze(cString_one, cString_two);	
		return 0;
}/*End main()*/

/*will look for the same character print
* Author : Pruthviraj 165490
* Created : 9 Setember 2024
*/
void squeeze(char s1[], char s2[])
{
	int i = 0;
	int j = 0;
	int k = 0;
	
	/*will iterate through the s1[] till null character is encountered*/
	while (s1[i] != '\0')
	{
		int found = 0;
		/*will look for the same character of s2[] with s1[]*/
		for(k = 0; s2[k] != '\0'; k++)
		{
			if (s1[i] == s2[k])
			{	
				/*after finding the same characterit will break the loop*/
				found = 1;
				break;
			}
		}
		/*if not found then it will store that in the new index of s1[]*/
		if(!found)
		{
			s1[j++] = s1[i];
		}
		/*incrementing for the next character*/
		i++;
	}
	/*Null - terminate the string*/
	s1[j] = '\0';
	printf("Output string: %s\n", s1);	
}/*End squeeze()*/
	
	
