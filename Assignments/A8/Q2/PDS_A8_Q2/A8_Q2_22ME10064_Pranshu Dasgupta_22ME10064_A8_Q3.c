/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 8
Description : Program to find saddle point in a given 2D array*/

#include <stdio.h>

int main(){
	int m, n, i , j, flag=0, min, max;
	printf("Shape of the 2D array: ");
	scanf("%d, %d", &m, &n);
	int A[m][n];
	for (i=0;i<m;i++){  //inputting 2D array
		for (j=0;j<n;j++){
			scanf("%d", &A[i][j]);
		}
	}
	for (i=0;i<m;i++){
		for (j=0;j<n;j++){
			max=A[0][j];
			for (int i=0;i<m;i++) if (A[i][j]>max) max=A[i][j];  //calculating maximum of jth column
			min=A[i][0];
			for (int j=0;j<n;j++) if (A[i][j]<min) min=A[i][j];  //calculating minimum of ith row
			if (max==A[i][j] && min==A[i][j]){printf("The saddle point is %d\n", A[i][j]); flag++;}  //checking for saddle and incrementing flag
		}
	}
	if (!flag) printf("There is no saddle point in this 2D array");  //if no saddle points exist, flag will be zero
	return 0;
}
