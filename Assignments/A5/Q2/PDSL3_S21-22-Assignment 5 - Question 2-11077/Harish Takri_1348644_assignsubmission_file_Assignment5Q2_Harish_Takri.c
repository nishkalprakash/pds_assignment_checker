/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main(){
	int mx=INT_MIN,mn=INT_MAX;
	int n_b,b,i,j,n,*arr;
	printf("Enter the number of array elements: ");
	scanf("%d",&n);
	arr=(int*)malloc(sizeof(int)*n);
	printf("Enter the array elements: ");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(arr[i]>mx){
			mx=arr[i];
		}
		if(arr[i]<mn){
			mn=arr[i];
		}
	}
	printf("Enter the number of bins: ");
	scanf("%d",&b);
	//Array of pointers to store bin values
	int *bins[b];
	//Elements in one bin
	n_b=(mx-mn)/b;
	int k,cnt,temp=mn+n_b;
	for(i=0;i<b;i++){
		cnt=0;
		//Counting number of elements in the bin
		for(j=0;j<n;j++){
			if(arr[j]>=mn && arr[j]<=temp){
				cnt++;
			}
		}
		//Allocating bin of required size
		bins[i]=(int*)malloc(sizeof(int)*cnt);
		k=0;
		//Storing values in the bin
		for(j=0;j<n;j++){
			if(arr[j]>=mn && arr[j]<=temp){
				bins[i][k]=arr[j];
				k++;
			}
		}
		//Displaying the result
		printf("bin%d -> ",(i+1));
		for(k=0;k<cnt;k++){
			printf("%d ",bins[i][k]);
		}
		printf("Number of elements in the bin%d = %d\n",(i+1),cnt);
		mn=temp+1;
		temp=mn+n_b;
	}
}
