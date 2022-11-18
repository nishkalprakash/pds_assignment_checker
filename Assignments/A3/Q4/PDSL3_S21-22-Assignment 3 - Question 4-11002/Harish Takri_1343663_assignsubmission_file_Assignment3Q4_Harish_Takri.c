/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>

int linearSearch(int arr[],int n,int x){
	int i;
	for(i=0;i<n;i++){
		if(arr[i]==x){
			return i;
		}
	}
	return -1;
}

int binarySearch(int arr[],int n,int x){
	int l=0,h=n-1,m;
	while(l<h){
		m=(l+h)/2;
		if(arr[m]==x){
			return m;
		}
		else if(x<arr[m]){
			h=m-1;
		}
		else{
			l=m+1;
		}
	}
	return -1;
}

int main(){
	int arr[20]; //defining the array
	int res,ch,x,n,i,flag;
	printf("Enter the number of elements : ");
	scanf("%d",&n);
	while(1){
		printf("Enter the elements in sorted order : ");       //checking if its sorted or not
		flag=0;
		for(i=0;i<n;i++){
			scanf("%d",&arr[i]);
		}
		for(i=0;i<n-1;i++){
			if(arr[i]>=arr[i+1]){
				flag=1;
				break;
			}
		}
		if(flag==1){
			printf("Not Sorted. Enter again\n");
			continue;
		}
		else{
			break;
		}
	}
	printf("Enter the key element x, which you want to search : "); // taking the key element x to be searched
	scanf("%d",&x);
	printf("Choose the algorithm : Type 1 for Linear Search and 2 for binary Search : ");
	scanf("%d",&ch);
	if(ch==1){
		printf("Executing the linear search algorithm\n");  //linear search
		res=linearSearch(arr,n,x);
		if(res==-1){
			printf("Element not found!!\n");
		}
		else{
			printf("Search Successful\n");
			printf("Element %d has been found at index %d\n",x,res);
		}
	}
	else if(ch==2){
		printf("Executing the binary search algorithm\n");  //binary search
		res=binarySearch(arr,n,x);
		if(res==-1){
			printf("Element not found!!\n");
		}
		else{
			printf("Search Successful\n");
			printf("Element %d has been found at index %d\n",x,res);
		}
	}
	else{
		printf("Wrong choice!!\n");
	}
}
