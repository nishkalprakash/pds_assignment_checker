/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<limits.h>
int main(){
	int n,i,j,k;
	//Input Size
	printf("Enter n:");
	scanf("%d",&n);
	int arr[n];
	//Input Array
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int mx=INT_MIN,sum,flag=0;
	//Finding the largest sub-array sum
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum=0;
			for(k=i;k<=j;k++){
				sum+=arr[k];
			}
			if(sum>mx){
				mx=sum;
			}
		}
	}
	printf("Largest Sum = %d\n",mx);
	//Printing the sub-arrays with the largest sum
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			sum=0;
			for(k=i;k<=j;k++){
				sum+=arr[k];
			}
			if(sum==mx){
				if(flag==0){
					flag=1;
					printf("Sub-array = ");
				}
				else{
					printf("OR ");
				}
				for(k=i;k<=j;k++){
					printf("%d ",arr[k]);
				}
			}
		}
	}
}
