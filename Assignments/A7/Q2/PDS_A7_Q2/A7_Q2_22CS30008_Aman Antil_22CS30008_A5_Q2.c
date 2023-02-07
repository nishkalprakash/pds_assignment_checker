/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 7
Description : Program to find number of terms which appear certain number of times
*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n,f,flag=1;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	int A[n];
	int *B;
	B=(int*)calloc(n, sizeof(int));//initializing array to all elements 0
	printf("Enter numbers: ");
	for(int i=0;i<n;i++) scanf("%d", &A[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++) if(A[i]==A[j]) B[i]++;//storing frequency of A[i] in B[i]
	}
	for(int i=n-1;i>=0;i--){
		for(int j=0;j<i;j++) if(A[j]==A[i]) B[j]=0;//preventing repetetion
	}
	printf("Enter frequency to be checked: ");
	scanf("%d", &f);
	for(int i=0;i<n;i++) if(B[i]==f) {printf("%d ", A[i]); flag=0;}
	if(flag) printf("NO number ");//flag condition for when no numbers have frequency
	printf("appears %d times\n", f);
	return 0;
}
