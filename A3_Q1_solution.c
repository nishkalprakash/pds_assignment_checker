/* 1.	Write a C program that takes three integers as input: day, month, and year. 
The program should check whether the input represents a valid date in the Gregorian calendar. If the date is valid, print "Valid date", otherwise print "Invalid date".  Input will be in the format DD MM YYYY (with spaces)
For example: 
20 8 2024 
as a date 20th August in the year 2024 in the Gregorian calendar.

Hint: Consider leap years and the number of days in each month.

	Test cases:

#	INPUT	OUTPUT
1	29 2 2020	Valid date
2	29 2 2019	Invalid date
3	31 4 2021	Invalid date
4	8 20 2024	Invalid date

*/

// Program to check if the given date is valid or not
// Code creator: Nishkal Prakash
// Roll No: 19CS91R05

#include <stdio.h>

int main(){
    int day, month, year;
    // Taking input from the user
    scanf("%d%d%d", &day, &month, &year);

    // Checking if the given date is valid or not
    if (year < 0){
        // If the year is negative, then it is invalid
        printf("Invalid date");
        return 0;
    }

    if (month < 1 || month > 12){
        // If the month is not in the range of 1 to 12, then it is invalid
        printf("Invalid date");
        return 0;
    }

    if (day < 1){
        // If the day is less than 1, then it is invalid
        printf("Invalid date");
        return 0;
    }

    if (month == 2){
        // If the month is February, then we need to check if it is a leap year or not
        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0)){
            // If it is a leap year, then the year is divisible by 4 and not divisible by 100 or divisible by 400
            if (day > 29){
                // If the day is greater than 29, then it is invalid
                printf("Invalid date");
                return 0;
            }
        } else {
            // If it is not a leap year, then the maximum days in February is 28
            if (day > 28){
                printf("Invalid date");
                return 0;
            }
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11){
        // If the month is April, June, September or November, then the maximum days is 30
        if (day > 30){
            printf("Invalid date");
            return 0;
        }
    } else {
        // For all other months, the maximum days is 31
        if (day > 31){
            printf("Invalid date");
            return 0;
        }
    }
    // If the date is valid, then print "Valid date"
    printf("Valid date");
    return 0;
}