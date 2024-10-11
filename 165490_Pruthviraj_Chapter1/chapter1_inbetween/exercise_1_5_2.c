#include<stdio.h>
int main()
{
	long nc;
	nc = 0;
	printf("This program is to count the num. of character and print that num.\n");
	while (getchar() != EOF)
	{
		++nc;
		printf("%ld\n", nc);
	}
	
return 0;
}
