/*
Section 14
Roll No : 22CS30010
Name : Ankan Saha
Assignment No : 3
Description : Program to compute electric bill
*/

#include <stdio.h>												// Including the Standard IO header file

int main() {

	int units;													// Declaring variables
	float bill;

	printf("Enter Electric Units (in kwh) : ");
	scanf("%d", &units);										// Taking input from user

	if(units > 600) {											

		bill = 50 + 100*0.75 + 100*1.20 + 300*1.50 + (units - 600)*1.50;

	}
	else if(units > 300) {

		bill = 50 + 100*0.75 + 100*1.20 + (units - 300)*1.50;		

	}
	else if(units > 200) {

		bill = 50 + 100*0.75 + (units - 200)*1.20;

	}
	else if(units > 100) {

		bill = 50 + (units - 100)*0.75;

	}
	else {

		bill = 50;

	}

	bill = bill * 1.2;											// Additional subcharge
	printf("Rs. %f\n", bill);

	return 0;
}