// To print the largest possible function with the given array
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>

int numLen(int num){ // find length of the number
	int count = 0;
	while(num != 0){
		num /= 10;
		count++;
	}
	return count;
}

int msb(int num){ // find msb of the number
	while(num / 10 != 0){
		num /= 10;
	}
	return num % 10;
}

int lsb(int num){
	return num % 10;
}

void arrangeArray(int *A, int len){ // Arranging array
	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			if(msb(A[i]) < msb(A[j])){
				int temp = A[i];
				A[i] = A[j];
				A[j] = temp;
			}
			else if(msb(A[i]) == msb(A[j])){
				if(lsb(A[i]) < lsb(A[j])){
					int temp = A[i];
					A[i] = A[j];
					A[j] = temp;
				}
			}	
		}
	}
}

void findNum(int *A, int len){ // Finding the number
	arrangeArray(A, len);
	for(int i = 0; i < len; i++)
		printf("%d", A[i]);
	printf("\n");
}

int main(){
	int n;
	printf("Enter length of array: ");
	scanf("%d", &n);
	printf("Enter elements: ");
	int A[n];
	for(int i = 0; i < n; i++)
		scanf("%d", &A[i]);
	findNum(A, n);
	return 0;
}
