/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 3
Description : Program to read operator symbol and do the respective operation
*/





#include <stdio.h>  //including header file

int main(){	
	char op;
	float x,y;  //declaring variables

	scanf("%c %f %f",&op,&x,&y);  //taking input
	switch(op){              //using switch cases to judge which operation to proceed with
		case '+' :
			printf("%f",x+y);   //calculating and printing results
			break;
		case '-' :
			printf("%f",x-y);
			break;
		case '*' :
			printf("%f",x*y);
			break;
		case '/' :
			printf("%f",x/y);
			break;
	}
	
	
	return 0;
}
