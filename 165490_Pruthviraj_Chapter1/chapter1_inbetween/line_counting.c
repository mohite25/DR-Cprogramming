#include <stdio.h>
int main()
{
	int n = 0;
	double c;
	printf("This program will count the lines\n");
	while((c = getchar()) != EOF)
	{
		if(c == '\n')
		{
			++n;
		}
	}
	printf("\nThe total no. of lines will be: %d\n", n);
	

return 0;
}
