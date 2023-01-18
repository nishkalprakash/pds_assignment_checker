/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 9
Description : Taking 2 dates using structures, printing them and finding their difference of days
*/

#include <stdio.h>																					// Includes the standard IO header file

struct Date{																						// date structure
	int d;
	int m;
	int y;
};

int isLeap(int year){																				// function to check for leap year
	return year%100 == 0 ? year%400 == 0: year%4 == 0;
}

int isPossible(int d, int m, int y){																// function to check if day is exceeding the maximum possible days for a month, for a year
	if(m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12){						// 31-day months
		return 31 >= d;
	}
	else if(m == 2){																				// feb has 29 days in a leap year (universal truth)
		return isLeap(y) ? 29 >= d : 28 >= d;
	}
	else{
		return 30 >= d;
	}
}

struct Date ReadDate(){																				// function to take date as input
	struct Date date;

	printf("Day : ");
	scanf("%d", &date.d);
	printf("Month : ");
	scanf("%d", &date.m);
	printf("Year : ");
	scanf("%d", &date.y);

	return date;
}

void PrintDate(struct Date date){																	// function to print the date in specified format 
	printf("%d/%d/%d\n", date.d, date.m, date.y);
}

void FindDays(struct Date x, struct Date y){														// funtion to find difference of days
	int days = 0;																					// here x is the earlier date and y is the later date
	while(!(x.d == y.d && x.m == y.m && x.y == y.y)){												// iterating through all the days till the end date
		days++;							
		x.d++;
		if(!isPossible(x.d, x.m, x.y)){																// if month exceeds then increase month and set day to 1
			x.m++;
			x.d = 1;
		}
		if(x.m > 12){																				// if month exceeds 12 then increase year and set month to 1
			x.y++;
			x.m = 1;
		}
	}
	printf("Days = %d\n", days);																	// printing
	
}

int main() {
	struct Date x, y, earlier_date, later_date;
	x = ReadDate();
	y = ReadDate();
	printf("X = ");
	PrintDate(x);
	printf("Y = ");
	PrintDate(y);

	if(x.y > y.y){																					// checking which date is earlier
		FindDays(y, x);
	}
	else if(x.m > y.m){ 
		FindDays(y, x);
	}
	else if(x.d > y.d){
		FindDays(y, x);
	}
	else{
		FindDays(x, y);
	}
	return 0;
}