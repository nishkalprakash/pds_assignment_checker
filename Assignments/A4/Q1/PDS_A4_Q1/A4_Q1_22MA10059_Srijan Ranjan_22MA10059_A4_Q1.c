/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:3
Description: This program takes an integer and returns all its factors
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number\n");   //The number of which the factors is to be computed.
	scanf("%d",&num);
	//Condition for negative numbers.
	if(num<0){
		num=num*(-1);
		//Loop for computing factors.
		for(int i=num;i>=1;i--){
			int var=num%i;
			if(var==0){
				printf("%d\n",num/i);
			}

		}
	}
	//Condition for poitive numbers.
	else if(num>0){
		for(int i=num;i>=1;i--){
			int var=num%i;
			if(var==0){
				printf("%d\n",num/i);
			}

		}

	}
	//Condition if the user inputs 0.
	else{
		printf("0\n");
	}
	return 0;
}
	