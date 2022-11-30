/*
Section 14
Name: Nived Shah
Roll No. : 22CS10049
Assignment No: 4
Description: Program to calculate factors of a number.
*/

#include <stdio.h>

int main(){
	
	int n, count;	// count represents counter for the "for" loop
	printf("Enter a number to calculate its factors: ");
	scanf("%d", &n);
	
	if(n<0)
		n=n-(2*n); // this is to convert a negative number to positive.
	if(n==0)
		printf("0");
	for(count=1; count<=n; count++){
		if((n%count)==0)		//whenever counter divides number, it will be printed as it is a factor.
			printf("%d ", count);
	}
	
	return 0;
}
