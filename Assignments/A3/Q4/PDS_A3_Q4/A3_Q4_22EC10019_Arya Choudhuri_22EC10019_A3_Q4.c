/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 3
	Description : Program to compute electricity bill
*/

#include <stdio.h>

int  main()
{
	float EU;
	printf("Enter total number of electric units:\n");
	scanf("%f",&EU);
		
	float charge;

	if (EU<=100)
		charge = 50;
	else if (EU<=200)
		charge = 50 + (EU-100)*0.75;
	else if (EU<=300)
		charge = 50 + 100*0.75 + (EU-200)*1.20;
	else
		charge = 50 + 100*0.75 + 100*1.20 + (EU-300)*1.50;
	
	
	charge = 1.2*charge;
	
	printf("The electricity bill is Rs. %.4f",charge);
	
	return 0;
}

