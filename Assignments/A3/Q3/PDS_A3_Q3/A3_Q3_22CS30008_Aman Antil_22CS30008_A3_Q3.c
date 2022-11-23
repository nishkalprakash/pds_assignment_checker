/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 3
Description : Program to check points
*/
#include<stdio.h>
int main(){
	char oper;
	float num1;
	float num2;
	printf("Enter the operator, number 1 and number 2 : ");
	scanf("%c %f %f", &oper, &num1, &num2);
	switch(oper){
	//specifying cases for all operators
	case '+' : printf("%f", num1 + num2);
		break;
	case '-' : printf("%f", num1 - num2);
		break;
	case '*' : printf("%f", num1*num2);
		break;
	case '/' : printf("%f", num1/num2);
		break;
	default : printf("Invalid");
	}
return 0;
}
