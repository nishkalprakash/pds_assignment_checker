/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Lab Test: 1
Description: Printing largest and second largest number as the user keeps entering.
*/

#include <stdio.h>

int main(){
	int i, max, smax, number;	//Variable declaration where max and smax represent maximum and second maximum respectively.

	printf("You will be shown largest and the second largest number as you keep entering the numbers.\n");		//to tell user the purpose of program
	printf("Enter the numbers hereafter. The program will only terminate if you enter a negative number.\n");	//to instruct user of how program works.

	max=0; smax=0;		//setting max and smax initially to lowest value possible.
	for(i=0; i>=0; i++){
		scanf("%d", &number);		

		if(number>=0){
		//if number is greater than max, it will become the max among the current numbers. Thus the previous max becomes the second max.
			if(number>max){
				smax=max;
				max=number;	
			}
		//if number is not greater than max, but greater than existing second max, it will become the second max number.
			else if(number>smax){
				smax=number;		
			}
		}
		else
			return(0);
		
		printf("Largest number: %d\n", max);
		if(i==0)
			printf("Second largest number: Value not yet entered\n");	//during first iteration, second maximum is not yet defined numerically.
		else
			printf("Second largest number: %d\n", smax);
		
	}

	return(0);
}
