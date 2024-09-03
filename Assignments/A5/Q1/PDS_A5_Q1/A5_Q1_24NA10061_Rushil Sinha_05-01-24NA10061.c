//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to rearrange positive and negative numbers in an array
#include <stdio.h>

int main() {
	#define N 100
	
	int n, ele,read1,read2,i,j, countn = 0,countp=0,k;   //Variable definition
	scanf("%d", &n);
	int arr[N];
	
	if (n<=N) {
		for (i=0; i<= (n-1); i++) {		//Input values into array
			scanf("%d", &ele);
			arr[i] = ele;
		} 
		printf("Original Array:");
		for (read1 = 0; read1<=n-1; read1++) {		//Traverses through original array
			printf("%d ", arr[read1]);
		}
		for (j=0; j<= n; j++) {				//Checks the case of negative numbers
			if (arr[j] < 0) {
				for (k=n; k>=0; k--) {		//Creates spaces into array
					arr[k+1] = arr[k];	
				}
				arr[countn] = arr[j];	
				countn = countn + 1;
			}
			if (arr[j] > 0) {			//Checks the case of positive numbers
				for (k=0; k<=n; k++) {		//Creates spaces into array
					arr[k-1] = arr[k];	
				}
				arr[countp] = arr[j];	
				countp = countp + 1;
			}
		}	
		printf("\nRearranged Array:");			
		for (read2 = 0; read2<=n-1; read2++) {		//Traverses through Rearranged Array
			printf("%d ", arr[read2]);
		}
	}
	else {
		printf("Error: n > 100");
return 0;
}
