/*
Section 14
Roll No : 22CS30010
Name : Ankan Saha
Assignment No : 3
Description : Program that takes 3 integers as input, checks if they represent valid time
			  and prints the valid time in HH:MM:SS format.
*/

#include <stdio.h>											// Including standard IO header file

int main() {

	int ss, mm, hh;											// Declarign variables to store

	printf("Enter Input in format : ss mm hh - ");
	scanf("%d %d %d", &ss, &mm, &hh);						// Taking input from user

	/* To check if all the variables are non-negative and represent correct time */
	if((!(ss > 59) && !(mm > 59) && !(hh > 23)) && ((ss >= 0) && (mm >= 0) && (hh >= 0))) {

		printf("Valid time - %d:%d:%d", hh, mm, ss);
		printf("\n");

	} else {

		printf("Invalid time");
		printf("\n");

	}

	return 0;

}