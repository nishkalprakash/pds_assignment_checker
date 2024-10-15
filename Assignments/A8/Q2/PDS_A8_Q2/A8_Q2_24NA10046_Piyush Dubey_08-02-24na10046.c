#include<stdio.h>
#define N 101
void SelectionSort(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(arr[i]>arr[j]){
				//swap arr[i] and arr[j]
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}	
}

int main(){
	int n,m;
	printf("n = ");
	scanf("%d",&n);
	int arr[N];
	printf("A[n] = ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	SelectionSort(arr,n);
	//sorting is done before receiving m
	printf("m = ");
	scanf("%d",&m);
	//Till here all the inputs are received and the array is sorted 
	n++; // size of array is inreased to get extra number m
	arr[n-1] = m;
	SelectionSort(arr,n); //function SelectionSort is called 
	// after this the rest of code is to print output array
	printf("Output Array:\n[");
	for(int i=0;i<n;i++){
		if(i==n-1){
			printf("%d",arr[i]);
		}
		else printf("%d, ",arr[i]);
		
	}
	printf("]\n");
	
	
	return 0;
}
