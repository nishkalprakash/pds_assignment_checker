/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 4
Description : Program to display different digits of a number in reverse order
*/

#include <stdio.h>											// Includes the standard IO header file

int main() {


	long int number;										// Declaring variables, revnumber is the reversed number
	printf("Enter number : ");
	scanf("%ld", &number);									// Inputing values

	/*
	To print digits, we can -
	Let number is 234
	Take 4 and display 'Four', divide number by 10, number becomes 23
	Take 3 and display 'Three', divide number by 10, number becomes 2
	Take 2 and display 'Two', divide number by 10, number becomes 0
	*/
	if(number == 0) {
		printf("Zero");
	}
	else {
		while(number != 0) {								// Implementing above logic
			switch (number%10) {
				case 1: printf("One "); 	break;
				case 2: printf("Two "); 	break;
				case 3: printf("Three "); 	break;
				case 4: printf("Four "); 	break;
				case 5: printf("Five "); 	break;
				case 6: printf("Six "); 	break;
				case 7: printf("Seven "); 	break;
				case 8: printf("Eight ");	break;
				case 9: printf("Nine "); 	break;
				case 0: printf("Zero ");	break;
			}
			number = number / 10;
		}
	}

	printf("\n");											// printf("\n") to not mess up my terminal
	return 0;
	
}