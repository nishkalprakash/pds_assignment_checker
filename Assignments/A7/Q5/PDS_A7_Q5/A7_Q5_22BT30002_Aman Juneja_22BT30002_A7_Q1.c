/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 8
* Description :	given an array of integers find if any elements are out of order.
*/


#include<stdio.h>

int count=0;
void greater(int arr[],int n,int idx){
	for(int i=0;i<idx;i++){
		if(arr[i]<arr[idx]) continue;
		count+=1;
		printf("%d : %d\n",idx,arr[idx]); 
	}
	//for(int i=idx+1;i<n;i++){
	//	if(arr[idx]<arr[i]) continue;
	//	count+=1;
	//	printf("%d : %d\n",idx,arr[idx]); 
	//}	
}

void lesser(int arr[],int n,int idx){
	for(int i=idx+1;i<n;i++){
		if(arr[idx]<=arr[i]) continue;
		count+=1;
	printf("%d : %d\n",idx,arr[idx]); 
	}
}

int main(){
	
	int n;
	int arr[10];
	scanf("%d",&n);
	printf("enter array elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		greater(arr,n,i);
		lesser(arr,n,i);
		
	}
	printf("Out of order: %d\n",count);	
	return 0;
}
