/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 3
Description: printing the total bill for a household according to given rates depending on number of units and adding tax for the same
*/

#include <stdio.h>

int main() {
	float units;
	float bill; // creating variables
	scanf("%f", &units);

	if(units <= 100) {
		bill = 50; // for less 100 >= units
	}
	else if(units <= 200) {
		bill = 50 + (units - 100)*(0.75); // for 100 < units <= 200
	}
	else if(units <= 300) {
		bill = 50 + 100 * 0.75 + (units - 200) * 1.20; // for 200 < units <= 300
	}
	else {
		bill = 50 + 100 * 0.75 + 100 * 1.20 + 1.50 * (units - 300); // for units above 300
	}

	bill = 1.20 * bill; // adding tax
	
	printf("Rs. %f", bill); // printing output

}
