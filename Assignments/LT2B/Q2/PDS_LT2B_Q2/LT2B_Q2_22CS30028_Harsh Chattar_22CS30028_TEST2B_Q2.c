/*
Section 14
Roll no : 22CS30028
Name : Harsh Chattar
TEST : 2B
Description : dynamically create a 2d array and then print it
*/


#include <stdio.h>
#include <stdlib.h>

void printmat(int mat[],int i,int j,int m,int n)
{
	/*for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int *temp = &mat[i]; 
			printf("%d ",*(temp+j*sizeof(int)));
		}
		printf("\n");
	}*/


	if(i<m){
		if(j<n){
			int *temp = &mat[i]; 
			printf("%d ",*(temp+j*sizeof(int)));
			printmat(mat,i+1,j+1,m,n);
	}
	j=0;
	printf("\n");
	printmat(mat,i+1,j,m,n);


}
}

void insertintoMatrix(int arr[],int mat[],int m,int n){
	int c = 0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			int *temp = &mat[i]; 
			*(temp+j) = arr[c];
			c++;
		}
	}
	printmat(mat,0,0,m,n);
}

void takeinput(){
	int m,n;
	printf("Enter m :");
	scanf("%d",&m);
	printf("Enter n :");
	scanf("%d",&n);
	int arr[m*n];
	printf("Enter %d elements : ",m*n);
	for(int i;i<m*n;i++){
		scanf("%d",&arr[i]);
	}
	int mat[m]; 
	for(int i = 0;i<m;i++){
		int *temp = &mat[i];
		temp = (int *)malloc(n*sizeof(int));
	}
	
	insertintoMatrix(arr,mat,m,n);
}



int main(){
	takeinput();


	return 0;
}