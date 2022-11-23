/*
Section 14
Roll no. :22CH10024
Name : Govind Jaiswal
Assignment no. :3
Description : Program to print a number in words
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int n,unit,tens;   //Declaring the required variables
	printf("Enter a number between 20 and 99 \n");    //Taking input from user
	scanf("%2d\n",&n);
	unit = n%10;
	tens = n/10;
	if(tens == 2) 
	printf("Twenty");
	else if(tens == 3)
	printf("Thirty");
	else if(tens == 4)
	printf("Forty");
	else if(tens == 5)
	printf("Fifty");
	else if(tens == 6)
	printf("Sixty");
	else if(tens == 7)
	printf("Seventy");
	else if(tens == 8)
	printf("Eighty");
	else 
	printf("Ninety");
	
	if(unit == 1)
	printf("One");
	else if(unit == 2)
	printf("Two");
	else if(unit == 3)
	printf("Three");
	else if(unit == 4)
	printf("Four");
	else if(unit == 5)
	printf("Five");
	else if(unit == 6)
	printf("Six");
	else if(unit == 7)
	printf("Seven");
	else if(unit == 8)
	printf("Eight");
	else 
	printf("Nine");    //Printing the output
	return 0;
}
