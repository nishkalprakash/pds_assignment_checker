//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Program to remove duplicates from an array
#include <stdio.h>

int main() {
	#define N 100
	int i,j,k,n,ele,read1,dup, count;
	scanf("%d", &n);
	if (n<=100) {
		int arr[N];
		for (i=0; i<= (n-1); i++) {	// Entering elements into array
			scanf("%d", &ele);
			arr[i] = ele;
		}
		
		printf("Original Array:");
		
		for (read1 = 0; read1<=n-1; read1++) { 	//printing original array
			printf("%d ", arr[read1]);
		}
		printf("\n");
		printf("Duplicates:\n");
		for (j=0; j<= (n-1); j++) {		//Find duplicates
			dup = 0;
			for (k=0; k <= (n-1); k++) {
				if ((arr[j] == arr[k]) && (k!=j)){
					dup++;
				}
			}	
			printf("%d (%d)\n", arr[j], dup);
		}
	}
	else {
		printf("Error: n > 100");
	}
	
return 0;
}
