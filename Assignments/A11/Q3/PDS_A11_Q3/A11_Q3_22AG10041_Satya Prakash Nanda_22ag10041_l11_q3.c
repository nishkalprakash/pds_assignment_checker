/*
satya prakash nanda
sec 14
22ag10041
lab 11
question 3*/
#include<stdio.h>
void ascending(int arr[], int n);
int main(){
int n;						
printf("enter value of n:");
scanf("%d", &n);
int n1=n+1;
int arr[n1];					
for(int i=0; i<n ; i++){
	printf("enter %d element:", i+1);
	scanf("%d", &arr[i]);			
}
printf("enter a number which you want to add:");
scanf("%d", &arr[n]);				 
ascending(arr,n1);
printf("output after insertion:");			
for(int i=0;i<n1; i++){				 
	printf(" %d ", arr[i]);
}
printf(" \n");
return 0;
}
void ascending(int arr[], int n){	
	for(int i=0; i<n; i++){
		for(int j=i+1; j<n;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
