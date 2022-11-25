/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 3
Description: program to check if a date exists in 2022, and then printing the corresponding day for that date
*/




#include <stdio.h>

int main() {
	int mod_day = 0; // creating mod_day to check day later through mod 7
	int day, month;
	printf("Enter day and month: ");
	scanf("%d%d", &day, &month); // taking input for day and month
	int valid = 0; // creating validity variable

	if(month == 2 && day <= 28) {
		valid = 1; // for february
	}
	else if(((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) && day > 0 && day < 32){
		valid = 1; // for months with max 31 days
	}
	else if(((month == 4) || (month == 6) || (month == 9) || (month == 11)) && day > 0 && day < 31) {
		valid = 1; // for months with max 30 days
	}
	if(valid == 0) {
		printf("Invalid date"); // for invalid dates
	}

	else {
		if (month > 1) {
			mod_day += 31;
		}
		if (month > 2) {
			mod_day += 28;
		}
		if (month > 3) {
			mod_day += 31;
		}
		if (month > 4) {
			mod_day += 30;
		}
		if (month > 5) {
			mod_day += 31;
		}
		if (month > 6) {
			mod_day += 30;
		}
		if (month > 7) {
			mod_day += 31;
		}
		if (month > 8) {
			mod_day += 31;
		}
		if (month > 9) {
			mod_day += 30;
		}
		if (month > 10) {
			mod_day += 31;
		}
		if (month > 11) {
			mod_day += 30;
		}
		
		// adding day count for the given date

		mod_day += day;
		mod_day = mod_day % 7; // taking mod 7 to find day of the week
		
		switch(mod_day){
			case 1:
				printf("Saturday");
				break;
			case 2:
				printf("Sunday");
				break;
			case 3:
				printf("Monday");
				break;
			case 4:
				printf("Tuesday");
				break;
			case 5:
				printf("Wednesday");
				break;
			case 6:
				printf("Thursday");
				break;
			case 0:
				printf("Friday");
				break;
			// implementing day corresponding to date as per 1/1/2022 being Saturday
		}
	}
}
