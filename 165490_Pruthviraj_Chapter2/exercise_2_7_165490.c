/*This program will Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted
* Author : Pruthviraj 165490
* Created : 16 September 2024
*/
/**REQUIRED HEADER FILES*/
#include <stdio.h>
#include "../error_handling.h"

/**FUNCTION PROTOTYPES*/
int invert(int x, int p, int n);

/*
* main : This will returns x with the n bits that begin at position p inverted
*/
int main()
{
	int ia;
	int ib;
	int ic;
	int iResult;
	
	printf("Write a function invert(x,p,n) that returns x with the n bits that begin at position p inverted\n");
	printf("Enter X:\n");							/*main input bit*/
	if (scanf("%d", &ia) != 1) {
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (a < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	printf("Enter p:\n");							/*At what position we want to invert*/
	if(scanf("%d", &ib)){
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (b < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	printf("Enter n:\n");							/*No. of bit to invert*/
	if(scanf("%d", &ic)){
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (b < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}

	Result = invert(ia,ib,ic);						/*calling the function*/
	printf("The inverted bit: %d\n", iResult);		/*printing the result*/
	return 0;
}/*End main()*/

/*function invert(x,p,n) that returns x with the n bits that begin at position p inverted
* Author : Pruthviraj 165490
* Created : 16 September 2024
*/
int invert(int x, int p, int n)
{
	int imask;
	int iextracted_bit_x;
	imask = (1 << n) - 1;							/*creating the mask to isolate the x at position p*/
	imask = imask << (p+1-n);						/*it will be a position we want*/
	iextracted_bit_x = ix & imask;					/*It will contain the n bit from the position p*/
	iextracted_bit_x = ~iextracted_bit_x;			/*Now we will invert the bits*/
	x = x & ~imask;									/*will clear the x from the P position*/
	x = x | (iextracted_bit_x & mask);				/*Putting the inverted bit*/
	
	return x;
}/*End invert()*/
