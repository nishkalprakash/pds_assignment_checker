/*
Section 14
Roll no. :22CH10024
Name : Govind Jaiswal
Assignment no. :3
Description : Program to perform some arithmetic operations
*/

#include <stdio.h>
#include <math.h>
 
int main()
{
	char symbol;
	float n1,n2,result;    //Declaring the variables
	printf("Enter the appropriate symbol and the two real numbers for opertion");
	scanf("%c%f%f",&symbol,&n1,&n2);
	if(symbol == '+')
	{
		result = n1 + n2;
		printf(" %f ",result);
	}
	else if(symbol == '-')
	{
		result = n1 - n2;
		printf(" %f ",result);
	}
	else if(symbol == '*')
	{
		result = n1 * n2;
		printf(" %f ",result);
	}
	else if(symbol == '/')
	{
		result = n1 / n2;
		printf(" %f ",result);     //Printing the result of the operation
	}
	return 0;
}	
