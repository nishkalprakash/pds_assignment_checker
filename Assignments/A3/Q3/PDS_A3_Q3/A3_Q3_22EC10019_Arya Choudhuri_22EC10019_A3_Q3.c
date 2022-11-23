/* 
	Section 14
	Roll no : 22EC10019
	Name : Arya Choudhuri
	Assignment No : 3
	Description : Program to perform basic aritmetic operations
*/

#include <stdio.h>

int main()
{
	char C;
	printf("Enter operation to be performed(+/-/*//):");
	scanf("%c",&C);
	
	float num1;
	printf("\nEnter number 1:");
	scanf("%f",&num1);
	
	float num2;
	printf("\nEnter number 2:");
	scanf("%f",&num2);

	if (C == '+')
	{
		printf("\nAddition is performed");
		float sum = num1 + num2;
		printf("\nResult is: %.3f",sum);
	}

	else if (C == '-')
	{
		printf("\nSubtraction is performed");
		float diff = num1 - num2;
		printf("\nResult is: %.3f",diff);
	}

	else if (C == '*')
	{
		printf("\nMultiplication is performed");
		float mult = num1 * num2;
		printf("\nResult is: %.3f",mult);
	}
	else
	{
		printf("\nDivision is performed");
		float div = num1 / num2;
		printf("\nResult is: %.3f",div);
	}
	
	return 0;
}



