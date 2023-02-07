/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 7
Description : Program to find number of terms out of order
*/
#include<stdio.h>
int main(){
	int A[10];
	int n,count=0;
	printf("Enter number of terms : ");
	scanf("%d", &n);
	printf("Enter numbers : ");
	for(int i=0;i<n;i++) scanf("%d", &A[i]);
	for(int i=0;i<n;i++){
		int k=0;
		for(int j=0;j<i;j++) if(A[j]<=A[i]) k++; //counting terms smaller than A[i] before A[i]
		for(int j=i+1;j<n;j++)	if(A[j]>=A[i]) k++; //counting terms larger than A[i] after A[i]
		if(k==n-1) count++;	//number of terms in order	
	}
	printf("Out of order: %d", n-count);
	return 0;
}