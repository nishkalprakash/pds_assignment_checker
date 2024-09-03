// Counting the number of duplicates
// Roll No: 24NA10049
// Name   : Prateek Shambhu Kesavarapu

#include <stdio.h>
#define N 100 // setting upper limit of the array size.

int main(){
	int n;
	scanf("%d", &n);
	
	if(n <= N){
		int arr[n], dupes;
		for(int i = 0; i < n; i++)
			scanf("%d", &arr[i]);
		
		// Outputting the original array
		printf("Original Array: ");
		for(int i = 0; i < n; i++)
			printf("%d ", arr[i]);
		printf("\n");
		
		printf("Duplicates: \n");
		for(int i = 0; i < n; i++){ // Calculating number of duplicates
			int curr = arr[i];
			dupes = 0;
			for(int j = i + 1; j < n; j++){
				if(curr == arr[j]){
					dupes++;
					arr[j] = arr[n - 1];
					arr[n - 1] = curr;
				}

			}
			n -= dupes;
			if (dupes)
				printf("\t %d (%d)\n", curr, dupes + 1);
		}
		
		if(!dupes)
			printf("\tEnter no Duplicates Found\n");
		
		printf("Unique array: ");
		for(int i = 0; i < n; i++){
			printf("%d ", arr[i]);
		}
		printf("\n");
	}
	else{
		printf("Error: n > 100 \n");
	}
	return 0;
}
