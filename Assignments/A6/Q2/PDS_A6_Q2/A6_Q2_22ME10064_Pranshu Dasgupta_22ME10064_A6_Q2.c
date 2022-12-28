/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 6
Description : Program to check for coprime numbers*/
#include <stdio.h>
#include <stdlib.h>

int flag=0, n;  //Some global variables that can be accessed and altered in every function
int gcd(int m, int n){  //recursive function to find gcd of two numbers
	if (m==n) return m;  //base case
	if (m>n) return gcd(m-n,n);  
	if (m<n) return gcd(m,n-m);
}

void CoPrime(int a, int b){  //function to check if a and b are coprime
	if (gcd(a,b)==1) flag=1;
	else flag=0;
	return;
}
void pair(int arrayName[]){  //function to check for all pairs of numbers in an array
	for (int i=0; i<n; i++){
		for (int j=i;j<n;j++){
			CoPrime(arrayName[i],arrayName[j]);
			if (flag) printf("(%d, %d) ",arrayName[i],arrayName[j]);
		}
	}
	return;
}
int check_int(float n){  //To check if a number is an integer and it is positive
	if ((n-(int)n)==0 && n>=0) return 0;
	else return 1;
}
int main(){
	float *p;
	printf("Input number of elements: ");
	scanf("%d", &n);
	int A[n];  //A is our refined positive integer array
	p=(float*)malloc(n*sizeof(float));  //p may contain floating points and negative values
	for (int f=0;f<n;f++) scanf("%f",(p+f));
	for (int f=0;f<n;f++){
		if (check_int(*(p+f))){
			printf("Invalid entries: All should be positive integer numbers");
			flag=1;
			break;
		}
		A[f]=(int)p[f];  //Ensuring A contains only positive integers
	}
	if (flag) return 0;
	else {
		printf("Co-prime pairs:\n");
		pair(A);  //Checking for all coprime pairs
	}
	return 0;
}


