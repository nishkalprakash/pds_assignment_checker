/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Question 2
Description: Program to print all the perfect numbers till a number N*/

#include <stdio.h>

int check_perfect(int n); //function to check if a number 'n' is a perfect number

int main(){
	int n, i, flag=0;
	printf("Enter a number to check for perfect numbers: ");
	scanf("%d", &n);
	if (n<0) printf("Invalid input"); //No negative number 'n' can be perfect. Because sum of positive divisors of 'n' will always be positive and 'n' will always be negative
	else{
		for (i=1;i<=n;i++){  //looping till n
			if (check_perfect(i)){
				printf("%d ", i); // if i is a perfect number then we print i
				flag=1;
			}
		}		
		if (!flag) printf("Invalid input"); //If no perfect numbers are found between 1 and 'n'
	}
	return 0;
}

int check_perfect(int n){
	int j, sum=0;
	for (j=1;j<=n/2;j++) if (n%j==0) sum+=j; //looping till n/2 because maximum possible factor apart from the number itself is n/2
	if (sum==n) return 1;
	else return 0;
}
