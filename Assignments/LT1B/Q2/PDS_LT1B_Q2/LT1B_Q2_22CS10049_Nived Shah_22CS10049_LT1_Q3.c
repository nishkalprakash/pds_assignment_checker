/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Lab Test: 1
Description: Printing a number pattern.
*/

#include <stdio.h>

int main(){	
	int i,j, ROWS;	//Variable declaration
	
	printf("Enter number of rows of the pattern (between 2 to 10) = ");	//prompting user to input number of rows.
	scanf("%d", &ROWS);
	
	for(i=1; i<=ROWS; i++){
		for(j=1;j<=i; j++){
			printf("%d ", i);	//since the pattern prints the value of row number, 'row number' of times, we use i in printf.
		}
		printf("\n");			//to enter a new line after row is printed.
	}
	
	return(0);
}
