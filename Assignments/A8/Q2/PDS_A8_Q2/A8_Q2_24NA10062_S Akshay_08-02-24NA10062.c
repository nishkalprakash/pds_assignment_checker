/*
Program to sort an array and insert an element keeping the arrangement

Name:S.Akshay
Roll No:24NA10062
*/


#include <stdio.h>

#define N 101

void main(){
	int A[N];
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	//Read the array
	printf("Enter the values of the array:");
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	
	//Sort the array
	for(int i=n-1;i>0;i--)
		for(int j=0;j<i;j++)
			if(A[j]>A[j+1]){
				int tmp = A[j];
				A[j]=A[j+1];
				A[j+1]=tmp;
			}
	
	//Insert a element in the array
	int m;
	printf("Enter a number: ");
	scanf("%d",&m);
	int k;
	for( k=0;k<n;k++)
		if(A[k]<m && A[k+1]>m){
			for(int j=n-1;j>=k+1;j--)
				A[j+1]=A[j];
			A[k+1]=m;
			break;
		}
	if(k==n)A[k]=m;
	
	//Print the array
	printf("Output Array:\n[");
	for (int i=0;i<n+1;i++)
		printf("%d, ",A[i]);
	printf("\b\b]\n");
}
	
