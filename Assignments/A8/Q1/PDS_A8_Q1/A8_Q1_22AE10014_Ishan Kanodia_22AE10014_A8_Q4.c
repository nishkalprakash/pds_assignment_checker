/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 8
Question No. : 4
Description : Transpose of matrix
*/

#include<stdio.h>

int main(){
	int col;
	printf("Number of elements in one row = ");
	scanf("%d ",&col);
	
	int matrix[col][col];				//Defining the square matrix
	
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++){
			scanf("%d",&matrix[i][j]);	//Taking input in the square matrix
		}
	}
	for(int i=0;i<col;i++){
		for(int j=0;j<col;j++){
			printf("%d ",matrix[j][i]);	//Printing the transpose of the matrix
		}
	}
return 0;
}
