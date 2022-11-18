/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<stdlib.h>

void solve(int arr[],int res[],int I,int n,int idx,int k){
	int i;
	//Index out of range
	if(idx>=n){
		return;
	}
	//Group of length I formed so we print and return from here
	if(k==I){
		for(i=0;i<I;i++){
			printf("%d ",res[i]);
		}
		printf("\n");
		return;
	}
	/*Updating value in the array and then making the function call
	which then updates the next value in the array*/
	for(i=idx;i<n;i++){
		res[k]=arr[i];
		solve(arr,res,I,n,i,k+1);
	}
}
// main funtion to test the above function
int main(){
	int i,n,I;
	printf("Enter number of elements : "); //size of the array
	scanf("%d",&n);
	//Input Array
	int arr[n];
	printf("Enter array elements : ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter value of I : ");  //asking for index
	scanf("%d",&I);
	//Array which stores intermediate answers
	int res[I];
	solve(arr,res,I,n,0,0);     //calling the func
}
