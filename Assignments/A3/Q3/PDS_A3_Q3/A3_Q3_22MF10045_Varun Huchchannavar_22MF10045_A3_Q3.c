/*
Section 14
Roll No: 22MF10045
Name: Varun Huchchannavar
Assignment No:3
Description: Read the symbol of a binary operator.Also read two opernds from the keyboard and perform the operation on those two operands depending upon the operator entered by the user.
*/
#include<stdio.h>
int main()
{
	
   	float a;
	float b;
 	char d;
	printf("Enter your operator");
	scanf("%c",&d);
        printf("Enter the first number");
	scanf("%f",&a);
	printf("Enter the second number");
	scanf("%f",&b);
	float sum;
	float diff;
	float product;
	float div;
	switch(d) {
	case '+':
	sum=a+b;
	printf("The sum is %f",sum);
	break;
	case '-':
	diff=a-b;
	printf("The difference is %f",diff);
	break;
	case '*':
	product=a*b; 
	printf("The product is %f",product);
	break;
	case '/':
	div=a/b;
	printf("The divison is %f",div);
	break;
	}
	return 0;
}
	   
	
