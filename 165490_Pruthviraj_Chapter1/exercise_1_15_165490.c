/**Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
/**REQUIRED HEADER FILE*/
#include <stdio.h>
/** FUNCTION PROTOTYPES */
int tempConversion();
/** MAIN PROGRAM */
/*
* main : accepts the range of temprature in fahrenheit and convert it to celsius by calling the function
*/
int main()
{
	tempConversion();
	return 0;
}/* End main()*/

/**convert the fahrenheit to celsius
* Author : Pruthviraj 165490
* Created : 2 September 2024
*/
int tempConversion()
{
	int iupper; //the upper limit for temprature
	int ilower; //the upper limit for temprature
	int istepsize; //step size
	int ifahrenheit; //temrature in fahrenheit
	int icelsius; //temrature in celsius
	
	istepsize = 20;
	iupper = 300;
	ilower = 0;
	printf("\nWill convert the range of temp. from fahrenheit to celsius with the stepsize of 20");
	
	ifahrenheit = ilower; 
	printf("\nFahrenheit\tCelsius");
	
	while(ifahrenheit <= iupper)
	{
		icelsius = 5 *(ifahrenheit - 32) / 9;
		printf("\n%d\t\t%d", ifahrenheit, icelsius);
		ifahrenheit = ifahrenheit + istepsize;
	}
	printf("\n");
}/* End tempConversion()*/
