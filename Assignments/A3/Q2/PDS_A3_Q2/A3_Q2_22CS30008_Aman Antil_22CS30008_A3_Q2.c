/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 3
Description : Program to check points
*/
#include<stdio.h>
int main(){
	int num, tens, ones;

	scanf("%d", &num);
	tens = num/10; //identifying digit at tens place
	ones = num%10; // identifying digit at ones place
	//using switch for every possible case
	switch(tens){
	case 1 : printf("One ");
		break;
	case 2 : printf("Twenty ");
		break;
	case 3 : printf("Thirty ");
		break;
	case 4 : printf("Forty ");
		break;
	case 5 : printf("Fifty ");
		break;
	case 6 : printf("Sixty ");
		break;
	case 7 : printf("Seventy ");
		break;
	case 8 : printf("Eighty ");
		break;
	case 9 : printf("Ninety ");
		break;
	default : printf("Invalid");
	}
	switch(ones){
	
	case 1 : printf("One");
		break;
	case 2 : printf("Two");
		break;
	case 3 : printf("Three");
		break;
	case 4 : printf("Four");
		break;
	case 5 : printf("Five");
		break;
	case 6 : printf("Six");
		break;
	case 7 : printf("Seven");
		break;
	case 8 : printf("Eight");
		break;
	case 9 : printf("Nine");
		break;
	}
	
return 0;
}	

