/*
	section:14
	roll no.: 22EC10059
	name: PRIYAM TARAFDER
	Assignment no.: 3
	description: calculator involving the operands +,-,*,/
*/

#include <stdio.h>
int main()
{
	char operand; float num1,num2;
	scanf("%c %f %f",&operand,&num1,&num2);
	switch(operand)
	{
	case '+': 
		printf("%f",(num1+num2));
		break;
	case '-': 
		printf("%f",(num1-num2));
		break;
	case '*': 
		printf("%f",(num1*num2));
		break;
	case '/': 
		printf("%f",(num1/num2));
		break;
	default:
		printf("Invalid input");
	}
}
