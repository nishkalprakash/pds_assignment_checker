/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 3
Description : Program to read a binary arithmetic operator and two float values and calculating the result
*/
#include<stdio.h>

int main()
{
	float sum,prod,diff,quo,num1,num2;	// Creating variables to store the input values
	char bin;
	printf("Enter binary arithmetic operator,number 1 and number 2:\n");
	scanf("%c %f %f",&bin,&num1,&num2);
	if (bin == '+'){
		sum = num1 + num2;
		printf("%f",sum);
	}
	else if (bin == '-'){
		diff = num1 - num2;
		printf("%f",diff);
	}
	else if (bin == '*'){
		prod = num1 * num2;
		printf("%f",prod);
	}
	else {
		quo = num1/num2;
		printf("%f",quo);
	}
	return 0;
}

