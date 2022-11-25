/* SECTION: 14
   ROLL NO.: 22CH10064
   NAME : SHREYA BHARTI
   ASSIGNMENT NO. : 3
   DESCRIPTION: Program to perform different operations on two numbers. */


#include <stdio.h>
int main(){
	char op;			//Declaration of variables
	float a,b, result;
	printf("Enter the operator and two operands to perform desired calculation: ");
	scanf("%c %f %f",&op, &a, &b);		//Reads the input taken from user--a is first number and b is second
	switch(op){

	case '+':
		result= a+b ;			//sums two numbers
		printf("result: %f",result);
		break;
	case '-':
		result= a-b ;			//subtracts two numbers
		printf("result: %f",result);
		break;
	case '*':
		result= a*b ;			//multiplies two numbers
		printf("result: %f",result);
		break;
	case '/':
		result= a/b ;			//divide a by b
		printf("result: %f",result);
		break;
	default:
		printf("Invalid operator");	//tells user if operator other than specified ones are used
}

return 0;
}

		
	
	
