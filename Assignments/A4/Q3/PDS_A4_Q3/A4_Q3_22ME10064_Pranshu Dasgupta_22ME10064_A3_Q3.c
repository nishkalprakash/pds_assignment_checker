#include <stdio.h>

int main(){
	long int n;
	printf("Enter any number: ");
	scanf("%ld", &n);
	if (n==0){  //Handling corner case of zero
		printf("Zero");
	}
	while (n!=0){  //Iterating till all digits are extracted
		switch (n%10){  //Extracting last digit and printing the equivalent word using switch case
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
			default:
				printf("Nine ");	
		}
		n=n/10;  //Truncating the last digit of the number
	}
	return 0;
}
