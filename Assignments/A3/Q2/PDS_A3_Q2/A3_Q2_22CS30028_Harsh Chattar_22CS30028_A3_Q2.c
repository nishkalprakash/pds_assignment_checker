/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
Assignment No. : 3
Description : program to print number in words
*/





#include <stdio.h>


int main(){
	int n,t,o;
	printf("Enter number : \n");  //taking input
	scanf("%d",&n);
	t = n/10;    //storing the ten's place digit in variable t
	o = n - (t*10);    //storing the one's place digit in variable o
	switch(t){                  //using switch case to find ten's place digit name
		case 2 :
			printf("Twenty ");
			break;
		case 3 :
			printf("Thirty ");
			break;
		case 4 :
			printf("Forty ");
			break;
		case 5 :
			printf("Fifty ");
			break;
		case 6 :
			printf("Sixty ");
			break;
		case 7 :
			printf("Sventy ");
			break;
		case 8 :
			printf("Eighty ");
			break;
		case 9 :
			printf("Ninety ");
			break;
	}

	switch(o){
		case 1 :     		//using switch case to find one's place digit name 
			printf("one");
			break;
		case 2 :
			printf("two");
			break;
		case 3 :
			printf("three");
			break;
		case 4 :
			printf("four");
			break;
		case 5 :
			printf("five");
			break;
		case 6 :
			printf("six");
			break;
		case 7 :
			printf("seven");
			break;
		case 8 :
			printf("eight");
			break;
		case 9 :
			printf("nine");
			break;
		
	}
	
	return 0;
}
