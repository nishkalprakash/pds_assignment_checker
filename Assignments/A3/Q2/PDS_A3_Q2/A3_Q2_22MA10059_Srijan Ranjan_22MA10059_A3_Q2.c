/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program takes two digit integer between 20 and 99. Then put the valur in words.
*/
#include<stdio.h>
int main(){
	int number; // Declaration of number variable.
	printf("Enter any two digit number between 20 and 99: ");
	scanf("%d",&number);
	int s_digit; // Declaration of second digit.
	s_digit=(number%10); // Calculation of second digit
	int f_digit; // Declaration of first digit.
	f_digit=(number/10); // Calculation of first digit.
	//Name of first digit.
	switch(f_digit){
		case 2: 
			printf("Twenty ");
			break;
		case 3:
			printf("Thirty ");
			break;
		case 4: 
			printf("Fourty ");
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
	}
	//Name of second digit.
	switch(s_digit){
		case 1:
			printf("one\n");
			break;
		case 2: 
			printf("two\n");
			break;
		case 3:
			printf("three\n");
			break;
		case 4: 
			printf("four\n");
			break;
		case 5: 
			printf("five\n");
			break;
		case 6: 
			printf("six\n");
			break;
		case 7: 
			printf("seven\n");
			break;
		case 8: 
			printf("eight\n");
			break;
		case 9: 
			printf("nine\n");
			break;
	}
	return 0;
}