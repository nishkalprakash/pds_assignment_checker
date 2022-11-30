/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:4
Description: This program takes an integer and returns the sum of its digits.
*/
#include<stdio.h>
int main(){
	int num;
	printf("Enter the number\n");  //The number to be computed.
	scanf("%d",&num);
	int sum=0;
	      // Initialisation for sum
	if(num<0){          //Condition for negative numbers.
		num=num*(-1);
		//Loop for computing sum of negative numbers.
		while(num>0){
			sum+=(num%10);
			num=num/10;
		}
		printf("Sum of the digits %d\n",sum*(-1));
	}
	//Conditon for positive numbers
	else{
		//Loop for computing sum of positive numbers.
		while(num>0){
			sum+=(num%10);
			num=num/10;
		}
		printf("Sum of the digits %d\n",sum);
	}
	
	return 0;
}