//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to CHECK VALID DATE

#include <stdio.h>

int main() {
	int date, month, year;
	printf("Enter date, month and year in DD MM YYYY format");
	scanf("%d %d %d", &date, &month, &year);
	if (((month == 1) ||(month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12) && ((date<=31)))){
		printf("Valid date");
	}
	else {
	printf("Invalid date");
	}
	 if ((month == 4) || (month == 6) || (month == 9) || (month == 11) && ((date<=30))){
		printf("Valid date");
	}
	else {
		printf("Invalid date");
	}
	if ((month == 2) && (year % 4 !=0) && (date <= 28)) {
		printf("Valid date");
	}
	else {
		printf("Invalid date");
	}
	 if ((month == 2) && (year % 4 ==0) && (date <= 29)) {
		printf("Valid date");
	}
	else {
		printf("Invalid date");
	}	
return 0;
}
		



