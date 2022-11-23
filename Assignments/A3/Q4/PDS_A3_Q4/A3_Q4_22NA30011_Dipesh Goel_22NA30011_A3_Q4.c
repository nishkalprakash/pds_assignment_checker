#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : The program checks that the entered time of a day is Valid or not

*/


int main()

{

	float units, bill=0;						//declaration of variables
	printf("Enter electricity units consumed in kWh : ");
	scanf("%f",&units);						//input from user
	
	if (units>0 && units<=100) bill=50;				//Determining under which slab?
	else if (units>100 && units<=200) bill=50+(units-100)*0.75;
	else if (units>200 && units<=300) bill=50+75+(units-200)*1.20;
	else if (units>300) bill=50+75+120+(units-300)*1.50;
	else printf("Invalid Input!! Enter valid units of electricity");
	


	bill=bill + bill*0.20;
	


	printf("%.2f",bill);						//Printing Result

	return 0;
}

