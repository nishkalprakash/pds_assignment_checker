// Program to find the largest and second largest number of the input while terminating when a negative number is inputted
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>

int main(){
	int num, largest = -1, secondLargest = -1; // Setting them to negative numbers so as to handle the case where the numbers are initially inputted
	printf("Enter numbers: ");
	scanf("%d", &num);
	while(num >= 0){ // Making sure the number is non-negative
		if(num > largest){
			secondLargest = largest;
			largest = num;
		}
		else if(num > secondLargest){
			secondLargest = num;
		}
		printf("Largest number: %d\n", largest);
		printf("Second largest number: ");
		if(secondLargest >= 0){	// if secondLargest is not assigned yet it will give the appropriate message
			printf("%d\n\n", secondLargest);
		}
		else{
			printf("Value not entered yet\n\n");
		}
		scanf("%d", &num);
	}
	return 0;
}
