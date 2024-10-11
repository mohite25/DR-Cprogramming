/*This program will have only one test inside the loop 
 (based on previous code: will search entire array to find the element binary search)
* Author : Pruthviraj 165490
* Created : 18 September 2024
*/

/**REQUIRED HEADER FILES*/
#include <stdio.h>

/**FUNCTION PROTOTYPES*/
int binsearch(int ix, int iv[], int in);

/*
* main : this will call the binsearch function and will print the result based on the condition
*/
int main() {
		int in = 11;	/*size of an array*/
    	int iarr[] = {2, 4, 6, 7, 9, 29, 45, 46, 49, 50, 51};	/*array in ascending order*/
    	int ix;    /*User input*/
    	printf("This pogram will do the binary search to find the element that user has entered\n");
		printf("Enter Number To Search: ");
		scanf("%d", &ix);
	
		int iresult = binsearch(ix, iarr, in);	/*function calling*/
		
			(iresult != -1) ? printf("Element found at index %d\n", iresult) : printf("Element not found\n");

    return 0;
}/*End main()*/

/* This will search for the element that user has entered and if it finds it will return the index number
* Author : Pruthviraj 165490
* Created : 18 September 2024
*/
int binsearch(int ix, int iv[], int in) {
    	int ilow, ihigh, imid;

    	ilow = 0;
    	ihigh = in - 1;

    	imid = (ilow + ihigh) / 2;

    	while (ilow < ihigh && ix != iv[imid]) {
        		if (ix > iv[imid])
            		ilow = imid + 1;
        		else
            		ihigh = imid - 1;

        	imid = (ilow + ihigh) / 2;
    	}

    	if (ix == iv[imid])
        		return imid;
    	else
        		return -1;
}/*End binsearch()*/
