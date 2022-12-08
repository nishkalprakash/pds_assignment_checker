/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description : to make bins and count the number of elements in each bin
*/

#include<stdio.h>

int main(){

	int n;
	printf("N = ");
	scanf("%d",&n); //scanning the number of elements in array.
	int arr[n]; 
	printf("A[N] = ");
	for(int i=0;i<n;i++){
            scanf("%d",&arr[i]); //scanning all array elements from user.
	}
	
	
	int bin;
	printf("Bins = ");
	scanf("%d",&bin);  //scanning bin value from user

	int max=arr[0],min=arr[0];
	
	//loop for calculating max element of array of n elements 
	for(int i=1;i<n;i++){
        	if(max<arr[i]){
            		max=arr[i];
        	}
	}
	
	//loop for calculating min element of array of n elements 
	for(int i=1;i<n;i++){
        	if(min>arr[i]){
            		min=arr[i];
        	}
	}

    	int diff=max-min;
    	int width=diff/bin;
    	for(int i=0;i<n;i++){
			
	}





	return 0;
}

