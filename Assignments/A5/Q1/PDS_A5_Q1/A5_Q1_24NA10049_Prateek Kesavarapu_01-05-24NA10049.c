// Rearranging the array such that negative numbers remain on the left side and positive numbers on the right
// Roll No: 24NA10049
// Name   : Prateek Shambhu Kesavarapu

#include <stdio.h>
#define N 100 // setting upper limit of the array size.

int main(){
	int n;
	scanf("%d", &n);
	if (n <= N){
		int arr[n];
		for(int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		
		// Outputting the original array
		printf("Original Array: ");
		for(int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
		
		// Doing the swap
		for(int i = 0; i < n; i++){
			for(int j = 1; j < n; j++){
				if(arr[j - 1] > 0 && arr[j] < 0){
					int temp = arr[j];
					arr[j] = arr[j - 1];
					arr[j - 1] = temp; 
				}
			}
		}
		
		// Outputting the final array
		printf("Rearranged Array: ");
		for(int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
	}
	
	else{
		printf("Error: n > 100 \n");
	}
	return 0;
}
