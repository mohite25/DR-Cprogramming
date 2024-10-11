/*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.
* Author : Pruthviraj 165490
* Created : 16 September
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**FUNCTION PROTOTYPES*/
int rightrot(int x, int n);

/*
* main : will returns the value of the integer x rotated to the right by n positions.
*/
int main()
{
	int ia;							
	int ib;							
	int iResult;					
	
	printf("Enter X:\n");			/*Our main input*/
	scanf("%d",&ia);
	
	printf("Enter N:\n");			/*Number of times the input will be rotated*/
	scanf("%d",&ib);
	
	iResult = rightrot(ia , ib);	/*Output of the program*/

return 0;
}/*End main()*/

/*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.
* Author : Pruthviraj 165490
* Created : 16 September
*/
int rightrot(int x, int n)
{
	int iextracted_bit_x = 1; 		/*initializing the bit*/
	
	/*will last till the i < n*/
	for (int i = 0; i < n; i++)
	{
		iextracted_bit_x = iextracted_bit_x & x; //left most bit will be captured
		x = x >> 1;                           // Right shift x by 1
		x = x | (rightmost_bit << (wordlength - 1));
	}

	return x;
}/*End rightrot()*/
