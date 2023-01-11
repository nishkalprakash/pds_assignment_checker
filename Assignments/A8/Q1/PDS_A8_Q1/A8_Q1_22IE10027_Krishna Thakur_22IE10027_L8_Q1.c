#include<stdio.h>

int main(){
	printf("Enter the number of elements in one row : ");
	int n;
	scanf("%d", &n);
	int A[n][n];
	for(int i=0; i<n; i++){ //taking the input for the array in row major order
		for(int j=0; j<n; j++){
			scanf("%d", &A[i][j]);

		}
	}
	for(int j=0; j<n; j++){ //printing the output of the array in column major order
		for(int i=0; i<n; i++){
			printf("%d ", A[i][j]);
		}
	}
	
	return 0; 
}