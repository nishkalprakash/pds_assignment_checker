/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 3
Description: Given a number between 20 to 99 we have to output the number name of given number.
*/

#include<stdio.h>

int main(){
	int x; //decleration of a variable for the number to be taken by user
	printf("enter the number : ");
	scanf("%d",&x); 
	/*
	Approach:
	the number is divided into two parts i.e. one's part and ten's part.
	in this we create two switch blocks one for ones place other for tens 	place
	the first switch checks for quotient when number divided by 10.
	then checks and prints value for given case.

	the second switch checks for remainder when number divided by 10.
	it also checks cases for the remainder and prints the required string.
		
	*/
	
	//first switch block with cases from 2 to 9 for tens place.
	switch(x/10){
		case 2:
			printf("Twenty");
			break;
		case 3:
			printf("Thirty");
			break;
		case 4:
			printf("Fourty");
			break;
		case 5:
			printf("Fifty");
			break;
		case 6:
			printf("Sixty");
			break;
		case 7:
			printf("Seventy");
			break;
		case 8:
			printf("Eighty");
			break;
		case 9:
			printf("Ninety");
			break;
		default:
			printf("Out of range.");
			return 0;
	}

	//second switch block with cases from 0 to 9 for ones place.
	switch(x%10){
		case 0:        
			break; 
		case 1:
			printf(" One");
			break;
		case 2:
			printf(" Two");
			break;
		case 3:
			printf(" Three");
			break;
		case 4:
			printf(" Four");
			break;
		case 5:
			printf(" Five");
			break;
		case 6:
			printf(" Six");
			break;
		case 7:
			printf(" Seven");
			break;
		case 8:
			printf(" Eight");
			break;
		default:
			printf(" Nine");
			break;
	}
	printf("\n");
	return 0;//return statement to end the program.
}
