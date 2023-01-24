/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 9
Description: Program to take two dates as input into date type structures, and then define various functions for the same. Descriptions have been given in the comments accompanying the respective functions.

*/

#include <stdio.h>

int arr[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; // array for checking days

typedef struct { // date type struct
	int day, month, year; // variables for days, months, years
} date;

date readdate () { // function for initialising date from inputs
	date x;
	scanf("%d", &(x.day));
	scanf("%d", &(x.month));
	scanf("%d", &(x.year));
	return x;
}

void printdate (date x) { // function for printing date from the structure 
	printf("%d/", x.day);
	printf("%d/", x.month);
	printf("%d\n", x.year);
}

void finddays(date x, date y) { // function to print number of days between two dates
	int daysx = calculate (x); // calculating days from 1/1/2000 to x
	int daysy = calculate (y); // calculating days from 1/1/2000 to y
	int days = daysy - daysx; // calculating their difference
	days = (days > 0) ? days : -1 * days; // changing sign of days if negative
	printf("Days = %d", days); // printing number of days
}

int calculate (date x) { // calculating days upto date x from 1/1/2000
	int daysx = 0; // number of days initially set to 0
	int day = 1, month = 1, year = 2000; // day, month, year starting from 1/1/2000
	while (year < x.year) { // incrementing year count and adding number of days as per leap yera or not
		daysx += (year++ % 4) ? 365 : 366;
	}
	while (month < x.month) { // incrementing month count from array, while accounting for the case of February in a leap year
		if (year % 4 == 0 && month == 2) {
			daysx += 29;
			month++;
		}
		else daysx += arr[month++ - 1];
	}
	while (day <= x.day) { // incrementing day count
		daysx++;
		day++;
	}
	return daysx; // returning the total number of days
}

int main() {
	date a, b; // declaring struct dates a and b
	printf("Enter first date in DD MM YYYY format: ");
	a = readdate();
	printf("Enter second date in DD MM YYYY format: ");
	b = readdate(); // taking input via readdate() function
	printf("X = ");
	printdate(a); // printing first date
	printf("Y = ");
	printdate(b); // printing second date
	finddays (a, b); // finddays function to print number of days in between
	return 0;
}
