#include <stdio.h>
#include "../error_handling.h"
int setbits(int x, int y, int p, int n);
int main()
{
	int a;	//x
	int b;	//y
	int c;	//p
	int d;	//n
	int result;
	
	printf("Enter X:\n");
	if (scanf("%d", &a) != 1) {
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (a < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	printf("Enter Y:\n");
	if (scanf("%d", &b) != 1) {
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (b < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	printf("Enter P:\n");
	if (scanf("%d", &c) != 1) {
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (c < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	printf("Enter N:\n");
	if (scanf("%d", &d) != 1) {
		handle_error(ERROR_INVALID_INPUT);
		return 1;
	}
	if (d < 0){
		handle_error(ERROR_NEGATIVE_NUMBER);
	}
	
	result = setbits(a,b,c,d);	//setbits(x,p,n,y);
	printf("Result : %d\n", result);
	
	return 0;
}

int	setbits(int x, int y, int p, int n)
{
	//to extract the right most n bit from y
	int mask = (1 << n) -1;
	int nbitof_y = y & mask; //contain the right most n bit
	
	//Shift the n bit of y to the position (p-n)
	nbitof_y = nbitof_y << (p - n);
	
	//clearing the corresponding n bits in x at position p-n 
	int iMaskofx = ~(mask << (p -n));
	x = (x & iMaskofx) | nbitof_y;
	
	
	return x;
}



