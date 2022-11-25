#include <stdio.h>
/*
	SECTION 14
	ROLL NO. 22NA30011
	NAME : DIPESH GOEL
	Assignment No. 3
	Description : The program checks that the entered time of a day is Valid or not

*/


int main()

{

	char operator;
	float num1, num2, result;						//declaration of variables
	printf("Enter in format '<operator> <number1> <number2>' : ");
	scanf("%c %f %f",&operator, &num1, &num2);				//input from user
	
	switch (operator)							//Determining Which operator?
	{
		case '+': result=num1+num2; break;
		case '-': result=num1-num2; break;
		case '*': result=num1*num2; break;
		case '/': result=num1/num2; break;
		default: printf("Invalid Input!! Enter valid operator");
	}

	printf("%.3f",result);							//Printing Result

	return 0;
}

