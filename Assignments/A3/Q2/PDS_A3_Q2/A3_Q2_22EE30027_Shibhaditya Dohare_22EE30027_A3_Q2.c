/*
section 14
Roll No : 22EE30027
Name : Shibhaditya Dohare
Assignment No : 3
Discription : Program to convert integers to words
*/
#include<stdio.h>
int main()
{
	char a, b;
	printf("Input a number between 20-99\n");
	scanf("%c%c", &a, &b);
	switch(a){
	case '2':
		printf("twenty ");
		break;
	case '3':
		printf("thirty ");
		break;
	case '4':
		printf("fourty ");
		break;
	case '5':
		printf("fifty ");
		break;
	case '6':
		printf("sixty ");
		break;
	case '7':
		printf("seventy ");
		break;
	case '8':
		printf("eighty ");
		break;
	case '9':
		printf("ninety ");
		break;
		}
	switch(b){
	case '1':
		printf("one");
		break;
	case '2':
		printf("two");
		break;
	case '3':
		printf("three");
		break;
	case '4':
		printf("four");
		break;
	case '5':
		printf("five");
		break;
	case '6':
		printf("six");
		break;
	case '7':
		printf("seven");
		break;
	case '8':
		printf("eight");
		break;
	case '9':
		printf("nine");
		break;
		}
	return 0;
}
	
	
		
