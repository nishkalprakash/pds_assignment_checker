/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 8
Description : Program to find saddle point in a given 2D array*/

#include <stdio.h>

int main(){
	int n, i, j;
	printf("Number of elements in one row=");
	scanf("%d", &n);
	int A[n][n];
	for (i=0;i<n;i++){  //inputting 2D array
		for (j=0;j<n;j++) scanf("%d", &A[i][j]);
	}
	printf("Column Major Order: ");
	for (i=0;i<n;i++){  //printing 2D array in column major order
		for (j=0;j<n;j++) printf("%d ", A[j][i]);
	}
	return 0;
}
