/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Test : 2
Description: Program to print a 2D array recursively*/

#include <stdio.h>
#include <stdlib.h>

//Defining two global variables so that they can be accessed anywhere
int m, n;


//The function moves backwards recursively from the last element

void print_matrix(int **p, int i, int j){


	//if we encounter element at (0,0), it is the base case and we stop printing as there are no more elements left in the backward direction.
	if (i==0 && j==0){  
		printf("%d\n", p[i][j]);
		return;
	}


	//if we encounter element at (i,0), we need to move to the last element of the previous row, i.e., (i-1, n-1) and continue printing.
	else if (j==0){
		printf("%d\n", p[i][j]);   
		print_matrix(p, --i, n-1);
	}


	//General case where we encounter an element in the middle and just need to print the element present before it in the same row.
	else {
		printf("%d ", p[i][j]);
		print_matrix(p, i, --j);
	}
}

void matrix_op(){
	//Initialising the 2D array
	printf("Enter M: ");
	scanf("%d", &m);
	printf("Enter N: ");
	scanf("%d", &n);
	
	int **p=(int**)malloc(m*sizeof(int*));
	for (int k=0; k<m; k++) p[k]=(int*)malloc(n*sizeof(int));
	
	//If it forms a valid 2D array
	if (m>0 && n>0){
		//Populating the 2D array
		printf("Enter %d elements: ", m*n);
		for (int i=0; i<m; i++) for (int j=0; j<n; j++) scanf("%d", &p[i][j]);

		print_matrix(p,m-1,n-1);
	}
	
	else printf("INVALID 2D ARRAY\n");
	return;
}

int main(){
	matrix_op();
	return 0;
}
