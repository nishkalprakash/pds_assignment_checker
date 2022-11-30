/*
Section 14
Name: Nived Shah
Roll No. : 22CS10049
Assignment No: 4
Description: Program to print reverse of a number in words.
*/

#include <stdio.h>

int main(){
	int count, ld;  //ld represents last digit.
	long int n;	// long int to store number >= 10 digits.
	printf("Enter a number to print its reverse number in words: ");
	scanf("%ld", &n);
	
	if(n>0){
		while(n!=0){
			ld=n%10; 	//extracts last digit.
			n/=10;		// extracts digits other than that at unit's place.
			switch(ld){	//switching cases to print the digit extracted.
				case 1: printf("One "); break;
				case 2: printf("Two "); break;
				case 3: printf("Three "); break;
				case 4: printf("Four "); break;
				case 5: printf("Five "); break;
				case 6: printf("Six "); break;
				case 7: printf("Seven "); break;
				case 8: printf("Eight "); break;
				case 9: printf("Nine "); break;
			}
		}
	}
	else if(n==0)
		printf("Zero");
	else
		printf("Negative number not allowed!"); //unwanted condition.

	return 0;
}
