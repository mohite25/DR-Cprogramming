/** This program will convert the range of temp. from fahrenheit to celsius with
* Author : Pruthviraj 165490
* Created : 2 August 2024
*/
/** REQUIRED HEADER FILES*/
#include <stdio.h>
/** MAIN PROGRAM */
/*
* main: it will convert the range of temp. from fahrenheit to celsius having the stepsize of 20
*/
int main()
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


return 0;
}/** End main() */
