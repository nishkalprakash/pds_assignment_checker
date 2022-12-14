/*
Section 14
Name: Nived Shah
Roll No: 22CS10049
Lab Test: 1
Description: Checking for armstrong numbers upto a user entered limit.
*/

#include <stdio.h>
#include <math.h>

void isArmstrong(int a){		//datatype is set to void since the function is not returning any value, but just printing output.
	for(int i=1; i<=a; i++){
		int digits=0, n=i;
		//to compute the number of digits of i.
		while(n!=0){
			n/=10;
			digits++;
		}
		int d, sum=0, temp=i;
		//to compute the sum of individual digits to the power of total digits
		while(temp!=0){
			d=temp%10;
			sum=sum+pow(d,digits);
			temp/=10;
		}
		if(sum==i)	//condition for a number to be armstrong.
			printf("%d ", i);	
	}
	printf("\n");		
	return;
}

int main(){
	int limit;	//Variable denoting the last value upto which user wishes to find the armstrong numbers.
	printf("Enter a limit upto which you wish to get the armstrong numbers: ");
	scanf("%d", &limit);
	
	if(limit<=0){
		printf("Invalid input\n");
		return(0);
	}
	else	
		isArmstrong(limit);	//if input is postive, a function is called which computes all armstrong numbers upto the limit.
	
	return(0);
}
