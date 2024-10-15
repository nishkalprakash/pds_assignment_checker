/*
Program to find the largest combination of integers in an array

Name:S.Akshay
Roll No:24NA10062
*/


#include <stdio.h>
#include <math.h>

#define N 100

int dig(int n){
	int d=0; 
	
	while (n>0){
		d++;
		n/=10;
	}
	
	return d;
}


void swap(int *a, int *b){
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void main(){
	int A[N];
	int n;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	
	//Read the array
	printf("Enter the values of the array:");
	for(int i=0;i<n;i++)scanf("%d",&A[i]);
	
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++){
			int s1,s2;
			int n1=A[i],n2=A[j];
			s1 = dig(A[i]);
			s2 = dig(A[j]);
			while(s1>0 && s2>0){
				if(n1/(int)pow(10,s1-1) < n2/(int)pow(10,s2-1)){
					swap(&A[i],&A[j]);
					break;
				}
				else if (n1/(int)pow(10,s1-1) == n2/(int)pow(10,s2-1)){
					if (s1>1) {n1 %= (int)pow(10,s1-1); s1--;}
					if (s2>1) {n2 %= (int)pow(10,s2-1); s2--;}
				}
				else break;
				if(s1==s2 && n1==n2)break;
			}
		}
	
	
	//Print the array
	printf("A[%d] = [",n);
	for (int i=0;i<n;i++)
		printf("%d, ",A[i]);
	printf("\b\b]\n");
	printf("Largest = ");
	for (int i=0;i<n;i++)
		printf("%d",A[i]);
	printf("\n");
			
}
	
