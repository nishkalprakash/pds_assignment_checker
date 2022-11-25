/*
Section 14
Roll No : 22NA10003
Name : Anish Kerketta
Assignment No : 3-4
Description : Program to compute and print the electric bill based on the total number of elecric units given by the user as a floating number.
*/
#include<stdio.h>
int main()
{
	float unit,bill=0.0;		//Declaring and assigning
	printf("Enter the total number of electric units\n");		//Instruction for the user
	scanf("%f",&unit);	//Read
	if(unit==0)				//Condition 1
	bill=0;
	else if((unit>0)&&(unit<=100))		//Condition 2
	{
	bill=50;				//Calculation
	bill=bill + 0.20*bill;
	}
	else if((unit>100)&&(unit<=200))	//Condition 3
	{
	bill=50 + 0.75*(unit-100);		//Calculation
	bill=bill + 0.20*bill;
	}
	else if((unit>200)&&(unit<=300))	//Condition 4
	{
	bill=50 + 0.75*100 + 1.20*(unit-200);	//Calculation
	bill=bill + 0.20*bill;
	}
	else if((unit>300))			//Condition 5
	{
	bill=50 + 0.75*100 + 1.20*100 + 1.50*(unit-300);	//Calculation
	bill=bill + 0.20*bill;
	}
	if(unit<0)				//Checking valid or invalid
	printf("Invalid input, please enter a valid input\n");
	else
	printf("Your Electricity bill is Rs.%f\n",bill);	
	return 0;
}

