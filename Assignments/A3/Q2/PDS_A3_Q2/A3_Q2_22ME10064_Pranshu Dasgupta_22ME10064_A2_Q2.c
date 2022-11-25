/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 3
Description : Program to write an input number into words*/

#include <stdio.h>

int main(){
	int num;
	printf("Input a 2 digit integer between 20 and 99: ");
	scanf("%d", &num);
	switch (num/10){   //extracting the ten's place digit
		case 2:
			printf("Twenty ");
			break;
		case 3:
			printf("Thirty ");
			break;
		case 4:
			printf("Forty ");
			break;
		case 5:
			printf("Fifty ");
			break;	
		case 6:
			printf("Sixty ");
			break;	
		case 7:
			printf("Seventy ");
			break;	
		case 8:
			printf("Eighty ");
			break;
		case 9:
			printf("Ninety ");
			break;
		default:
			printf("Invalid input for ten's place.");
			break;
	}
	switch (num%10){  // extracting the one's place digit
		case 0:
			printf(" ");
			break;
		case 1:
			printf("One");
			break;
		case 2:
			printf("Two");
			break;
		case 3:
			printf("Three");
			break;
		case 4:
			printf("Four");
			break;
		case 5:
			printf("Five");
			break;	
		case 6:
			printf("Six");
			break;	
		case 7:
			printf("Seven");
			break;	
		case 8:
			printf("Eight");
			break;
		case 9:
			printf("Nine");
			break;
		default:
			printf(" ");
			break;
	}
	return 0;
}

