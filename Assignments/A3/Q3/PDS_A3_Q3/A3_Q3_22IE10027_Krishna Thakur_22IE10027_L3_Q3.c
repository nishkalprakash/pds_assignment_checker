/*
Section 14
Roll No:22CS30010
Name :Krishna Thakur
Assignment No:3
Description: program to perform arthimetic operations
*/
#include <stdio.h>
int main() {
	printf("Enter the operator and two digits");
	char o;
	float n1, n2;
	scanf("%c%f%f", &o, &n1, &n2);
	float ans;
	if (o=='+'){
		ans=(n1+n2);
		printf("%f", ans);
	}
	else if (o=='-'){
		ans=(n1-n2);
		printf("%f", ans);
	}
	else if (o=='*'){
		ans=(n1*n2);
		printf("%f", ans);
	}
	else if (o=='/'){
		ans=(n1/n2);
		printf("%f", ans);
	}
	else printf("invalid input");



	return 0;
}