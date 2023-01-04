/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 7
* Description :insert new value to already existing array.
*/

#include<stdio.h>


//swap function 
void swap(int *xp,int *yp){
	int temp=*xp;
	*xp=*yp;
	*yp=temp;
}

//sort function using bubble sort 
void sort(int arr[],int n){
	for(int i=0;i<=n;i++){
		for(int j=0;j<=n-1;j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);	//swapping elements by using call by reference
			}
		}
	}
}

//print function
void print(int arr[],int n){
	for(int i=0;i<=n;i++){
	printf("%d ",arr[i]);	
}
}

int main(){

	int arr[1000],brr[1000]; //declaration of 2 arrays
	int n;	
	scanf("%d",&n); //getting array from user
	for(int i=0;i<n;i++){	
        scanf("%d",&arr[i]);		//scanning array elements
	}
	int m;
	scanf("%d",&m);			//scaning element to be inserted
	arr[n]=m;
		
	sort(arr,n);			//calling sorting function
	print(arr,n);			//printing array


	return 0;
}

