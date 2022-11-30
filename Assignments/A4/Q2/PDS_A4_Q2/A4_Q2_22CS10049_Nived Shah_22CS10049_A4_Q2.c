/*
Section 14
Name: Nived Shah
Roll No. : 22CS10049
Assignment No: 4
Description: Program to calculate sum of digits of a number.
*/

#include <stdio.h>

int main(){
	int num, count, temp; // temp variable is used so that original num is not affected for future use.
	int sum=0;

	printf("Enter a number to calculate its sum of digits: ");
	scanf("%d", &num);
	
	//temp is updated such that it is always positive, so it doesn't affect for loop if negative number is entered.
	if(num<0)
		temp=(-num);	
	else
		temp=num;
	
	while(temp!=0){
		sum= sum +(temp%10);	//modulus extracts unit's digit.
		temp/=10;		//division extracts digits after unit's place.
	}
	
	if(num<0)
		printf("-%d", sum);	// this is where original number is used again, if it is negative, we must print negative sum.
	else
		printf("%d", sum);
	
	return 0;
}
	
