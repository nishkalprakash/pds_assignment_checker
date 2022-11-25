/*
Section 14
Roll No : 22CS30010
Name : Ankan Saha
Assignment No : 3
Description : Program to display which day the given date was (in 2022)
*/

#include <stdio.h>

int main() {																			// Including the Standard IO header file

	int day, month;																		// Declaring variables
	int diff, remainder;																// Diff - calculates how many days after 1st January, remainder - decides the day

	printf("Enter day and month: ");
	scanf("%d %d", &day, &month);														// Taking input

	switch (month) {																	// Long switch cblock for each month.
		case 1:																			// January
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = day;
			break;

		case 2:																			// February
			if(day > 28) {																// 28 days as 2022 is not a leap year
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + day;
			break;

		case 3:																			// March
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + day;
			break;

		case 4:																			// April
			if(day > 30) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + day;
			break;

		case 5:																			// May
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + day;
			break;

		case 6:																			// June
			if(day > 30) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + day;
			break;

		case 7:																			// July
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + day;
			break;

		case 8:																			// August
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + 31 + day;
			break;

		case 9:																			// September
			if(day > 30) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + day;
			break;

		case 10:																		// October
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + day;
			break;

		case 11:																		// November
			if(day > 30) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + day;
			break;

		case 12:																		// December
			if(day > 31) {
				printf("Invalid date\n");
				return 0;
			}
			diff = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + day;
			break;

		default:																		// If any other month is taken as input
			printf("Invalid Month\n");
			return 0;

	}

	diff -= 1;																			// Subtracting 1 as we are taking 1st Jan as reference, so 1 day has already passed.
	remainder = diff % 7;																// Days of the week occur periodically in a cycle of order 7, after 6 days the same day (name, not the actual day) is repeated.

	switch (remainder) {																// Switch case for the days, also given 1st Jan 2022 is Saturday
		case 0:
			printf("Saturday");
			break;

		case 1:
			printf("Sunday");
			break;

		case 2:
			printf("Monday");
			break;
		
		case 3:
			printf("Tuesday");
			break;

		case 4:
			printf("Wednesday");
			break;

		case 5:
			printf("Thursday");
			break;

		case 6:
			printf("Friday");
			break;
		
	}

	printf("\n");																		// print("\n") for the terminal
	return 0;

}