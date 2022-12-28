/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 6
Description : Program to check co primes
*/
#include<stdio.h>
int gcd(int m, int n){//recursive function for gcd
	int max, min, gc;
	if(m>n){
		max = m; min = n;
	}
	else{
		max =n; min=m;
	}
	if(m==0||n==0) return max;// base case
	gc=gcd(max%min,min);
	return gc;
}
void pair(float *A, int limit){
	for(int i=0; i<limit; i++){
		for(int j=i;j>=0;j--){
			if(gcd(A[i],A[j])==1) printf("(%.0f %.0f)  ", A[i], A[j]);//printing such that no zeroes in front of float value appear
		}
	}
}
int main(){
	int k;
	printf("enter number of elements : ");
	scanf("%d", &k);
	float A[k];
	for(int i=0;i<k;i++) scanf("%f", &A[i]);
	for(int i=0; i<k; i++) {
		int v=A[i];
		if((A[i]/v)>1.001){//condition when decimal numbers are input
			printf("Invalid entries: All should be integer numbers");
			return 0;
		}
		if(A[i]<0){
			printf("Invalid entries: All should be positive numbers");
			return 0;
		}
	}
	printf("Coprime pairs: \n");
	pair(A,k);
	return 0;
}