/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program takes two decimal numbers, an operand and performs the operation.
*/
#include<stdio.h>
int main(){
	char operand; //Declaration of operand variable.
	printf("Enter the operand\n");
	scanf("%c",&operand);
	float num1,num2; // Declaration of numbers.
	printf("Enter 2 numbers\n");
	scanf("%f %f",&num1,&num2);
	// Operations to be performed.
	switch(operand){
		case '+':
			printf("%f\n", num1+num2 );// Addition
			break;
		case '-':
			printf("%f\n", num1-num2 );// Subtraction
			break;
		case '*':
			printf("%f\n", num1*num2 ); // Multiplication
			break;
		case '/':
			printf("%f\n", num1/num2 ); // Division
			break;
	}
	return 0;
}
