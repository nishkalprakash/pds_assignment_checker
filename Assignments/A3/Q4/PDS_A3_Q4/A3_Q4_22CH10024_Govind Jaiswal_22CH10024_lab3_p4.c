/*
Section 14
Roll no. :22CH10024
Name : Govind Jaiswal
Assignment no. :3
Description : Program to print electric bill details
*/

#include <stdio.h>
#include <math.h>

int main()
{
	int units;
	float bill = 0.0f;
	printf("Enter number of units used up");
	scanf("%d",&units);
	if(units <=100)
	printf("Rs. 50.0");
	else if(units > 100 && units <= 200)
	{
		bill = 50.0 + (((float)(units-100))*0.75);
		bill =  bill + 0.20 * bill;
		printf("Rs. %f ",bill);
	}
	else if(units > 200 && units <= 300)
	{
		bill = 125.0 + (((float)units-200)) * 1.20);
		bill = bill + 0.20 * bill;
		printf("Rs. %f ",bill);
	}
	else 
	{
		bill = 245.0 + (((float)units-300)) * 1.50);
		bill = bill + 0.20 * bill;
		printf("Rs. %f ",bill);
	}
	return 0;
}
