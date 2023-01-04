/*
Section 14
Roll No : 22EE10008
Name : Ankan Saha
Assignment No : 7
Description : Insert element to already sorted array to not change the order
*/

#include <stdio.h>											// Includes the standard IO header file
#include <stdlib.h>											// library for malloc function

int main() {
	int *A, n, m, *B, flag = 0;								// A is initial array, B is final array, n is size of A, m is the element to insert, flag is boolean to check if m is already inserted

	printf("Enter number of elements : ");
	scanf("%d", &n);
	
	A = (int *) malloc((n+1) * sizeof(int));				// allocating (n+1) * sizeof(int) bytes of memory as A will have 1 more element inserted into it

	for(int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}

	printf("m = ");
	scanf("%d", &m);

	int t;													// temp variable
	A[n] = m;												// insrting m to last

	for(int i = n; i>0; i--){								// bubble sort, but from the end
		if(A[i] < A[i-1]){
			t = A[i];
			A[i] = A[i-1];
			A[i-1] = t;
		}
	}

	printf("Sorted array : ");
	for(int i = 0; i < n+1; i++) {
		printf("%d ", A[i]);
	}

	printf("\n");											// terminal :)
	return 0;
}