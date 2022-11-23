/*
Section : 14
Roll Number : 22AE10014
Name : Ishan Kanodia
Assignment number : 3
Description : Taking the input of binary arithmetic operator along with two operands and computing the answer
*/

#include<stdio.h>
int main()
{

	float a,b ;
	char operator ;
	printf("Please enter the operator along with two operands\n");
	scanf("%c %f %f",&operator ,&a ,&b);//Here we are taking our required inputs

	if (operator == '+')//expression for '+' operator
		printf("%f", a+b);
	else if (operator == '-')//expression for '-' operator
		printf("%f", a-b);
	else if (operator == '*')//expression for '*' operator
		printf("%f", a*b);
	else if (operator == '/')//expression for '/' operator
		printf("%f", a/b);
	else printf("Invalid Input");
return 0;
}
