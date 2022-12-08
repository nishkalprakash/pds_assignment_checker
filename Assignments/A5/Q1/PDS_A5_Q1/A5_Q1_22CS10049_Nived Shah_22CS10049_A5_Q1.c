/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Assignment No. :5
Description: Calculate sum of series of n terms as 1+x+(x^2/2!)..
*/

#include <stdio.h>

int power(int x, int n){		//function to calculate x^n
	int i,y;
	y=1;	
	for(i=1; i<=n;i++){	
		y=y*x;	
	}
	return(y);
}

int fact(int n){			//function to calculate factorial of number
	int prod=1;
	for(int i=1; i<=n; i++){
		prod=prod*i;	
	}
	return(prod);
}

int main(){
	int X, num, i;
	float sum=1.0;			//sum is initialized to 1 instead of 0 to avoid extra calculation for 0! and hence starting for loop with i=1;
	
	printf("Input value of the variable x and n, to calculate the sum of series of n terms of the form 1+x+(x^2/2!) ...");
	scanf("%d %d", &X, &num);	

	for(i=1;i<num; i++){
		sum=sum+((float)(power(X,i))/fact(i)); 	// required calculation for the series using function calling.
	}
	printf("%f", sum);
	return 0;
}

