/*
Section 14
Name: Nived Shah
Roll No. : 22CS10049
Assignment No: 4
Description: Program to print an alternating 1 0 pattern.
*/

#include <stdio.h>

int main(){
	int i, j, k, rows;	//i is the counter for rows, j is for odd positions and k for positions adjacent to 1 within required limit.
	
	printf("Enter number of rows for the pattern (between 2 to 10): ");
	scanf("%d", &rows);
	
	for(i=1; i<=rows; i++){	
		for(j=1; j<=i; j+=2){
			printf("1 ");
			for(k=1; k<i; k++){	//using k<i ensures that an extra 0 is not printed since k is nested within 2 loops.
				if(k==j)		
					printf("0 ");
			}
		}
		printf("\n");	//new line after every row.
	}
	
	return 0;
}
