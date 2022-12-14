/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Question 3
Description: Pattern printing program*/

#include <stdio.h>

int main(){
	int n, i, j, counter=1;  //Count will essentially be what I will be printing. It will be incrememented after every print statement. i keeps track of the row number and j keeps track of the column number.
	printf("Input the number of rows: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++){  //looping for 'n' rows.
		for (j=1;j<=i;j++){ //column number should not exceed row number while printing
			printf("%d ", counter);
			counter++;	
		}
		printf("\n");  //printing new line at the end of each line of the pattern.
	}
	return 0;
}
