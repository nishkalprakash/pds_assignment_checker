/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:3
Discription :To do operations 

*/
#include<stdio.h>
int main()
{
	char op;
	float a,b;
	printf("Enter operator and  two numbers\n");
	scanf("%c %f %f",&op,&a,&b);
	switch(op){
	case '+':
		printf("Addition of %f and %f is %f" ,a,b,a+b);
		break;
	case '-':
		printf("Subtraction of %f and %f is %f",a,b,a-b);
		break;
	case '*':
		printf("Multiplication of %f and %f is %f",a,b,a*b);
		break;
	case '/':
		printf("Division of %f and %f is %f",a,b,a/b);
		break;
	
	}

	return 0;
}
