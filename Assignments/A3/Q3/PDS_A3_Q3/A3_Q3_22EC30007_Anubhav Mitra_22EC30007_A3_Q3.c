/* Section 14
name: Anubhav Mitra
Roll: 22EC30007
Assignment no. : 3
Description: program to implement a simple calculator, using switches for efficiency rather than standard if else statements
*/


#include <stdio.h>

int main() {
	char symbol;
	float a,b; // initialising variables

	scanf("%c%f%f", &symbol, &a, &b); // taking input

	switch(symbol) {
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
			printf("%f", a/b);
			break;
		// creating switch for each possible case of operator, taking input as char
	}

	return 0;
}
