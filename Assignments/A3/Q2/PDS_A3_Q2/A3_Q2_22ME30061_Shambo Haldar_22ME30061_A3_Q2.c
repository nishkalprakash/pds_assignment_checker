/*
Section 14
Roll No: 22ME30061
Name : Shambo Haldar
Assignment No: 3
Description : Program to take a intiger between 20 and 99 and printing it in words
*/
#include<stdio.h>

int main()
{
	int num;
	printf("Enter an integer between 20 and 99\n");
	scanf("%d",&num);
	switch (num/10){
		case 2:
		printf("Twenty ");
		break;
		case 3:
		printf("Thirty ");
		break;
		case 4:
		printf("Forty ");
		break;
		case 5:
		printf("Fifty ");
		break;
		case 6:
		printf("Sixty ");
		break;
		case 7:
		printf("Seventy ");
		break;
		case 8:
		printf("Eighty ");
		break;
		case 9:
		printf("Ninety ");
		
	}
	switch (num%10){
		case 1:
		printf("one");
		break;
		case 2:
		printf("Two");
		break;
		case 3:
		printf("Three");
		break;
		case 4:
		printf("Four");
		break;
		case 5:
		printf("Five");
		break;
		case 6:
		printf("Six");
		break;
		case 7:
		printf("Seven");
		break;
		case 8:
		printf("Eight");
		break;
		case 9:
		printf("Nine");
		break;
	}
	return 0;
}

