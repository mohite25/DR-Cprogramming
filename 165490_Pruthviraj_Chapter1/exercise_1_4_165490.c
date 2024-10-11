/**This program will print the range of temp. from cesius to fahrenheit
* Author : Pruthviraj 165490
* Created : 2 August 2024
*/
/** REQUIRED HEADER FILES*/
#include<stdio.h>
/** MAIN PROGRAM */
/*
* main: it will convert the range of temp. from celsius to fahrenheit having the stepsize of 20
*/
int main()
{
	int iupper; //the upper limit for temprature
	int ilower; //the upper limit for temprature
	int istep; //step size
	int ifahrenheit; //temrature in fahrenheit
	int icelsius; //temrature in celsius
	
	iupper = 300;
	ilower = 0;
	istep = 20;
	
	icelsius = ilower;
	printf("This program will print the range(0 to 300) of temrature from celsius to fahrenheit with stepsize of 20\n");
	printf("Celsius\tFahrenheit\n");
	
	while(icelsius <= iupper)
	{
		ifahrenheit = (icelsius * 9/5) + 32;
		printf("%d\t%d\n", icelsius, ifahrenheit);
		icelsius = icelsius + istep;
	}



return 0;
}/** End main() */
