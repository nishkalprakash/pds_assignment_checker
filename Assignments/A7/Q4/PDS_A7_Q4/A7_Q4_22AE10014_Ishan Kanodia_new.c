/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 7
Question No. : 4
Description : Giving the maximum number from the input array using append
*/

#include<stdio.h>

void selectionSort(int arr[], int size){
	for(int start =0;start<size-1;start++){
	int minIndex = start;//indexofminvalue
	for(int j=start+1;j<size;j++)
	if(arr[j]<arr[minIndex])
	minIndex=j;
	int temp=arr[minIndex];
	arr[minIndex]=arr[start];
	arr[start]=temp;
	}
}

int main(){
	int n;
	printf("Enter n : ");
	scanf("%d",&n);
	int arr[n];
	int _arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++){
	if(arr[j]>0&&arr[j]<10)
		_arr[j]=arr[j];
	else if(arr[j]>=10&&arr[j]<100)
		_arr[j]=arr[j]/10;
	}
	
	selectionSort(_arr,n);
	int new_arr[n];
	for(int i=0;i<n;i++){
		new_arr[n-i]=_arr[i];
	}
	for(int i=0;i<n;i++){
		_arr[i]=new_arr[i];
	}
	for(int k=0;k<n;k++){
		if(_arr[k]!=_arr[k+1])
		printf("%d",_arr[k]);
	}
	
	selectionSort(arr,n);
	int newarr[n];
	for(int i=0;i<n;i++){
		newarr[n-i]=arr[i];
	}
	for(int i=0;i<n;i++){
		arr[i]=newarr[i];
	}
	for(int k=0;k<n;k++){
		if(arr[k]!=arr[k+1])
		printf("%d",arr[k]);
	}




	for(int k=0;k<n;k++){
		if(_arr[k]!=_arr[k+1]){
			printf("%d",arr[k]);
		}
		else {
			printf("%d",arr[k]);
		}
	}
return 0;
}






























