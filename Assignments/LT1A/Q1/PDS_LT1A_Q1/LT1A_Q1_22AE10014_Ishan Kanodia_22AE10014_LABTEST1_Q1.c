/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Lab Test No. : 1
Description : Writing a program to print all the perfect numbers less than or equal to the number N taken as input from the user
*/

#include<stdio.h>

int main(){

	int N,n;				//Here we are declaring the variables
	printf("Enter an integer : ");
	scanf("%d",&N);				//Taking the input from the user
	if(N<6)
		printf("Invalid input ");	//Printing Invalid input if N<6 since the least possible perfect number is 6
	else {
	for(n=6;n<=N;n++){			//Initiating a for loop for different numbers less than of equal to N
	int sum=0;
		for(int i=1;i<n;i++){		//Initiating a for loop for checking if a number is a factor of the number n
			if(n%i==0){
				sum = sum + i;
			}
		}
		if(sum==n)
		printf("%d ",n);		//Printing the perfect numbers
	}	//First for loop ends here
	}	//End of else
return 0;
}	
			
			
		
		
		
		
			
			
			
