/*
 Section 14
 Roll No: 22CS10049
 Name: Nived Shah	
 Assignment No: 3
 Description: Performing arithmetic operation depending on entered choice.
*/

#include <stdio.h>

int main(){
	char op;
	float v1, v2;
	
	printf("Enter the symbol of the arithmetic operator you wish to use on the operands and then input the 2 operands : ");
	scanf("%c %f %f", &op, &v1, &v2);
	
	//switch case to check for entered character and use that operator for computation
	switch(op){
		case '+':
			printf("%f\n", v1+v2);
			break;
		case '-':
			printf("%f\n", v1-v2);
			break;
		case '*':
			printf("%f\n", v1*v2);
			break;
		case '/':
			printf("%f\n", v1/v2);
			break;
		default:
			printf("Operator not recognized\n"); //default case if the user enters any other operator other than required 4.
	}
	return 0;
}
			
