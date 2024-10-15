#include <stdio.h>
#include <stdlib.h>


int swap(int a, int b){
	int temp=a;
	a=b;
	b=temp;
	return 0;
	}
	
int sort(int* arr, int n){
	for (int i=0; i<n; i++){
		for (int j=0; j<n-i-1; j++){
			if (*(arr+j)<*(arr+j+1)) swap(*(arr+j),*(arr+j+1));	
	}}}
	

int maxValue(int *arr,int n){
	int max=arr[0];
	for (int i=0; i<n; i++){
		if (arr[i]>max){
			max=arr[i];
			}
		}
	return max;
	}

int main()
{	int n;
	printf("Input size of array: "); scanf("%d", &n);
	int *arr=(int *)malloc(sizeof(int)*n);
	printf("Enter Values for Array \n");
	for (int i=0; i<n; i++){
		scanf("%d", arr+i);
		}
		
	//sorting
	
	
	sort(arr, n);
		
		
		
	for (int i=0; i<n; i++){
		printf("%d ", *(arr+i));
		}
	


	return 0;
}
