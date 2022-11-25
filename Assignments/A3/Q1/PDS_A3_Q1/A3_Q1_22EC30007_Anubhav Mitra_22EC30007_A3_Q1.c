/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 3
Description: Checking validity of entered time in hours, minutes and seconds, and printing the same in proper railway format
*/

#include <stdio.h>

int main() {

	int hours, minutes, seconds; // creating variables
	printf("Enter seconds, minutes, hours: ");
	scanf("%d%d%d", &seconds, &minutes, &hours); // taking input
	
	if(hours >= 0 && hours < 24 && minutes >= 0 && minutes < 60 && seconds >= 0 && seconds < 60) {
		printf("Valid time - %d:%d:%d", hours, minutes, seconds); // printing time in proper order, after verifying constraints
	}

	else {
		printf("Invalid time"); // printing invalid time in case the entered time is not possible
	}
}
