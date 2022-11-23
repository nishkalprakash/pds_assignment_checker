/*
 Section 14
 Roll No : 22MT10023
 Name : HARSH GUPTA
 Assignment : 3
 Description : Program to input two digit integer as input and print it in words
*/

#include <stdio.h>					//including the standard input output library

int main()
{
	int d;						//declaring variable to store the integer input by the user
	int t,o;					        //declaring variable to store the ten's and one's digits respectively
	printf("Enter an integer between 20 and 99 : ");	//prompting the user to give input
	scanf("%d",&d);					//taking the integer as input
	t=d/10;						//storing the ten's digit in t
	o=d%10;						//storing the one's digit in o
	switch(t)					//running a switch case for the ten's digit
	{
		case 2: printf("Twenty ");break;
		case 3: printf("Thirty ");break;
		case 4: printf("Forty ");break;
		case 5: printf("Fifty ");break;
		case 6: printf("Sixty ");break;
		case 7: printf("Seventy ");break;
		case 8: printf("Eighty ");break;
		case 9: printf("Ninety ");break;
		default : printf("Invalid input\n");o=10;  //printing "Invalid input" for the values entered by the user not in the range and changing the value of o so 								   //as to match none of the switch cases
	}
	switch(o)					//running a switch case for the one's digit
	{
		case 0: printf("\n");break;
		case 1: printf("one\n");break;
		case 2: printf("Two\n");break;
		case 3: printf("Three\n");break;
		case 4: printf("Four\n");break;
		case 5: printf("Five\n");break;
		case 6: printf("Six\n");break;
		case 7: printf("Seven\n");break;
		case 8: printf("Eight\n");break;
		case 9: printf("Nine\n");break;
	}
	return 0;					//the int main() will return 0
}
