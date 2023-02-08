/*
Section 14
Roll no : 22CS30008
Name : Aman
Lab test 2
Description : 2D array create and print
*/   
#include <stdio.h>
#include <stdlib.h>
int m,n;
//initializing a 2d array 
void init(int ***r){
	printf("Enter M : ");
	scanf("%d",&m);
	printf("Enter N : ");
	scanf("%d",&n);
		*r=(int**)malloc(m*sizeof(int*)); //allocating memory to array of pointers to rows
	for(int i=0;i<m;i++){
		(*r)[i]=(int*)malloc(n*sizeof(int)); //allocating memory to each row
	}
}
//recursive function to print
void recprt(int** a, int r, int c){
	//base condition- if fn reaches 0th row and 0th column, print and return
	if(r==0&&c==0) {
		printf("%d ", a[0][0]);
		return;
	}
	//condition for start of row
	if(c==-1) {r--;c=n-1;}
	recprt(a,r,c-1); //recursive call
	printf("%d ",a[r][c]); //printing from start
	if(c==n-1) printf("\n"); //printing endline when new row has to be printed
}

void inp(int **a){
	printf("Enter %d elements: ", m*n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d", &a[i][j]);
			recprt(a,i,j); //calling function as the elements are entered
			printf("\n");
		}
	}
}
int main(){
	//no printf and scanf in main function
	int ** a;
	init(&a);
	inp(a);
	return 0;
}