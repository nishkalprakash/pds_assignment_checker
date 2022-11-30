/*
Section 14
Roll No: 22BT30002
Name:Aman Juneja
Assignment No : 4
Description: Program to print the factors of a given number inputted by user.
*/

#include<stdio.h>

int main(){
	
	long int a; //decleration of long int 
	printf("Enter an integer number : "); 
	scanf("%lu",&a); //scanning the integer from user
	printf("The factors of the %ld are : ",a);
	if(a==0){ printf("0");} //condition for a=0
	
	else{	
		if(a<0) a=a*(-1); 
		//for loop to check if a is fully divisible by i where i is from 1 to n
		for(long int i=1;i<=a;i++){
			//if condition to check the divisibility
			if(a%i==0){
				printf("%lu ",i);
			}
		}	
	}

	printf("\n");



	return 0;
}
