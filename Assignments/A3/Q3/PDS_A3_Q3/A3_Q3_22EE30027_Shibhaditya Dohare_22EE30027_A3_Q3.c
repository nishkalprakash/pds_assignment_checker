/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 3
Discription : To calcute two operands by an operator
*/
#include<stdio.h>
int main()
{
	char c;
	float a, b;
	printf("Enter the operator and the two operands \n");
	scanf("%c %f %f", &c, &a, &b);
	switch(c){
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
		}
	return 0;
}
