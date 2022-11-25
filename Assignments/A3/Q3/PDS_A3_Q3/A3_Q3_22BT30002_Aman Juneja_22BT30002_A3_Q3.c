/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: to calculate and output the answer given the two numbers and operation to be done between them.
*/

#include<stdio.h>

int main(){
	float a,b; //two floats decleared
	char c; // character for operator decleared
	printf("enter the operator and the two numbers : ");
	scanf("%c %f %f",&c,&a,&b); //operator and numbers inputted.
	//switch statements for caclulations
	switch(c){
		case '+':	//case-1 for +
			printf("a + b = %f",a+b);
			break;
		case '-':	//case-2 for -
			printf("a + b = %f",a-b);
			break;
		case '*':	//case-3 for *
			printf("a + b = %f",a*b);
			break;
		case '/':	//case-4 for /
			printf("a + b = %f",a/b);
			break;
		default:
			printf("Invalid operator");
			break; //break statement added to break the switch block after execution of one case and to not execute all other below lying cases.
	}
	return 0;
}
