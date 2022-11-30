/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 4
Description : Program to read an integer value(< 10 digits) and display the digits in reverse
*/

#include<stdio.h>

int main()
{
	long int num;
	printf("Enter a number:\n");
	scanf("%ld",&num);
	if (num == 0)
		printf("Zero");
	else {
	while(num > 0){
	switch(num % 10){
	case 0:
		printf("Zero ");
		break;
	case 1:
		printf("One ");
		break;
	case 2: 
		printf("Two ");
		break;
	case 3: 
		printf("Three ");
		break;
	case 4: 
		printf("Four ");
		break;
	case 5: 
		printf("Five ");
		break;
	case 6: 
		printf("Six ");
		break;
	case 7: 
		printf("Seven ");
		break;
	case 8: 
		printf("Eight ");
		break;
	case 9: 
		printf("Nine ");
		break;
	}
	num = num / 10;
	}
	}
	return 0;
}


