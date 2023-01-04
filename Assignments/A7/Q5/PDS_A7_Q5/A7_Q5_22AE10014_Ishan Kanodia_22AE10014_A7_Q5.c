/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 7
Question No. : 5
Description : Finding the number of elements out of order
*/

#include<stdio.h>

int main(){
	int arr[10];						//Defining the array
	int n,count=0;
	printf("Enter the value of n between 0 and 10 : ");
	scanf("%d",&n);						//Input for the number of values
	for(int i=0;i<n;i++){					//Loop for taking input in the array
		scanf("%d",&arr[i]);
	}
	printf("Out of order: ");
	for(int j=0;j<n-1;j++){
		if(arr[j]>arr[j+1]){				//Checking statement
			printf("%d ",n-j);
		count++;
		break;						//Breaking from the for loop if our condition matches
		}
	}
	if(count==0)						//If statement for 0 match case
		printf("0 ");
return 0;
}
