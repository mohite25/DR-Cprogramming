#include <stdio.h>
int binsearch(int x, int arr[], int n);
int main()
{
		int n = 11; //size of a array
		int arr[] = {10, 23, 34, 45, 56, 66, 68, 69, 79, 84, 90};
		int x;
		
		printf("Enter Number To Search: ");
		scanf("%d", &x);
		
		int result = binsearch(x, arr, n);
		
		(result != -1) ? printf("Element found at index %d\n", result) : printf("Element not found\n"); 

		return 0;
}

int binsearch(int x, int v[], int n)
{
		int low, high, mid; 
		low = 0; 
		high = n - 1; 
		while (low <= high) { 
        		mid = (low + high) / 2; 
        			if (x < v[mid]) 
            				high = mid - 1;  // Search in the lower half
        			else if (x > v[mid]) 
            				low = mid + 1;   // Search in the upper half
        			else /* found match */ 
        					return mid; 
    	} 
    	return -1; /* no match */ 

}


