// Program to see whether the date provided is valid on the gregorian calander
// Code Author: Prateek Kesavarapu
// Roll No.   : 24NA10049

#include <stdio.h>

int main(){
	int date, month, year; // Declaring variables for accepting date, month and year
	int validity; // Flag variable for storing the validity of the date
	scanf("%d %d %d", &date, &month, &year);
	
	// Conditionals for checking validity
	// Checking if the month inputed is less than or equal to 12
	if(month <= 12){
	
		// All months with 31 days
		if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){ 
			if(date <= 31){
				validity = 1;
			}
			else{
				validity = 0;
			}
		}
		
		// The month of February
		else if(month == 2){
			int isLeap; // Flag variable for checking if the year is a leap year
			
			// Code for checking if the year is a leap year
			if(year % 4 == 0){
				if(year % 100 != 0){
					isLeap = 1;	
				}
				else if(year % 100 == 0 && year % 400 == 0){
					isLeap = 1;
				}
			}
			else{
				isLeap = 0;
			}
			
			// updating validity
			if(isLeap && date <= 29){
				validity = 1;
			}
			else if(!isLeap && date <= 28){
				validity = 1;
			}
			else{
				validity = 0;
			}
		}
		
		else{ // Remaining months with 30 days
			if(date <= 30){
				validity = 1;
			}
			else{
				validity = 0;
			}
		}
	}
	
	// Whenever the user inputs the month greater than 12
	else{
		validity = 0;
	}
	
	// The final print statement
	if(validity){
		printf("Valid date\n");
	}
	else{
		printf("Invalid date\n");
	}
	
	return 0;
}
