/*
Section 14
Roll No:22CS30010
Name :Krishna Thakur
Assignment No:3
Description: Program to write numbers in words
*/
#include <stdio.h>
int main()
{
	printf("enter any number between 20 and 99");
	int a;
	scanf("%d", &a);
	int b, c;
	b=(a/10);
	c=(a%10);

	if (b==2){
		printf("Twenty ");
		
	}
	if (b==3){
		printf("Thirty ");
		
	}
	if (b==4){
		printf("Forty ");
		
	}
	if (b==5){
		printf("fifty ");
		
	}
	if (b==6){
		printf("Sixty ");
		
	}
	if (b==7){
		printf("Seventy ");
		
	}
	if (b==8){
		printf("eighty ");
		
	}
	if (b==9){
		printf("Ninety ");
		
	}
	if (c==1)
			printf("one");
		if (c==2)
			printf("two");
		if (c==3)
			printf("three");
		if (c==4)
			printf("four");
		if (c==5)
			printf("five");
		if (c==6)
			printf("six");
		if (c==7)
			printf("seven");
		if (c==8)
			printf("eight"); 
		if (c==9)
			printf("nine");
	return 0;

}

	
