/*
	Section 14
	Roll No.: 22CS10069
	Name : Sayandeep Bhowmick
	Assignment No.: 3
	Description : Calculating the electricity bill
*/
#include <stdio.h>

int main()
{
	printf("Enter the number of Electric Units consumed \n");
	float unit;
	scanf("%f", &unit);
	float bill;
	if(unit>300)
		bill=(unit-300.00)*1.50+245.00;			/*Checks the value of the units consumed and calculates the electricity bill accordingly*/
	else if(unit>200)
		bill=(unit-200.00)*1.20+125.00;
	else if(unit>100)
		bill=(unit-100.00)*0.75+50.00;
	else if(unit>0)
		bill=50.00;
	else
	{
		printf("Wrong Inoput!!!! \n");
		return 0;					//return 0 directly stops any further execution
	}
	bill*=1.20;						//Adds the surcharge
	printf("Electricity Bill is Rs.%f \n",bill );
	return 0;
}
