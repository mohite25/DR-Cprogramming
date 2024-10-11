/*This program will get two string from input and function any(s1,s2) will returns the first location in a string s1
where any character from the string s2 occurs 
* Author : Pruthviraj 165490
* Created : 10 September 2024
*/
/**REQUIRED HEADER FILES*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>

/**MACRO DEFINITIONS*/
#define MAXSIZE 1000

/**FUNCTION PROTOTYPES*/
void lowercase(char s1[]);
void any(char s1[], char s2[]);
/*
* main : this will get two strings from user and after converting them to lowercase give it to the any(s1,s2) function
*/
int main()
{
	char str[MAXSIZE];	/*First string will be saved here*/
	char set[MAXSIZE];	/*Second String will be saved here*/
	int iC;				/*will get characters*/
	int i = 0;
	int j = 0;
	printf("will returns the first location in a string s1 where any character from the string s2 occurs\n");
	
	/*get the first string and save in str*/
	printf("Enter the first String of Characters:\n");
	while((iC = getchar()) != '\n' && i < MAXSIZE - 1)
	{
		str[i] = iC;
		i++;
	}
	str[i] = '\0';	/*NULL - terminate the string*/
	lowercase(str);	/*convert it to lower case*/
	
	/*get the secong string and save in set*/
	printf("Enter the second String of Characters:\n");
	while((iC = getchar()) != '\n' && i < MAXSIZE - 1)
	{
		set[j] = iC;
		j++;
	}
	set[j] = '\0';	/*NULL - terminate the*/
	lowercase(set);	/*convert it to lower case*/
	
	any(str, set);
	return 0;
}/*End main()*/
	
/*function any(s1,s2) will returns the first location in a string s1 where any character from the string s2 occurs 
* Author : Pruthviraj 165490
* Created : 10 September 2024
*/
void any(char s1[], char s2[])
{
	char *result = strpbrk(s1, s2);
	
	if(result != NULL)
	{
		printf("First occurrence found at index: %ld\n", result - s1);
	}
	else{
		printf("No occurrence found.\n");
	}
}/*End any()*/
	
void lowercase(char s1[])
{
	int i;
	for(i = 0; i < s1[i] != '\0'; i++){
	
		s1[i] = tolower(s1[i]);
	}
}/*End lowercase()*/
