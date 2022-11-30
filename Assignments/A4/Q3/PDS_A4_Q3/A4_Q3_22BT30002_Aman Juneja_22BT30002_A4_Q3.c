/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: program to read an integer and display number name of digits in reverse order.
*/

#include<stdio.h>

int main(){
	long long int num,y; //decleration of long long integer 
	printf("enter the number: ");
	scanf("%llu",&num); //scanning number from user
	//case -1 when num is equal to 0
	if(num==0){ 
		printf("Zero ");
		return 0;
	}
	//when num !=0
	while(num!=0){
		y=num%10;
		num=num/10;
		//switch case block to write number name of each digit.
		switch(y){
			case 0: 
				printf("Zero ");
				break;
			case 1: 
				printf("One ");
				break;
			case 2: 
				printf("Two ");
				break;
			case 3: 
				printf("Three ");
				break;
			case 4: 
				printf("Four ");
				break;
			case 5: 
				printf("Five ");
				break;
			case 6: 
				printf("Six ");
				break;
			case 7: 
				printf("Seven ");
				break;
			case 8: 
				printf("Eight ");
				break;
			case 9: 
				printf("Nine ");
				break;
		}	

	}

	return 0;
}
