/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 3
Description : Program to make a simple calculator*/
#include <stdio.h>

int main(){
	float a, b; char operator;
	printf("Input the operation you want to perform and 2 operands: ");
	scanf("%c %f %f", &operator, &a, &b);
	switch (operator){
		case '+':
			printf("%f", a+b);
			break;
		case '-':
			printf("%f", a-b);
			break;
		case '*':
			printf("%f", a*b);
			break;
		case '/':
			if (b==0){
				printf("\nDivision by zero is invalid.");
			}
			else{
				printf("%f", a/b);
				break;
			}
		default:
			printf("\n");
			break;			
	}
	return 0;
}
