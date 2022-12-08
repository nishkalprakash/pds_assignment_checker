/*
Section 14
Roll no : 22CS30008
Name : Aman
Assignment no : 5
Description : Program to check whether pair of numbers in array are co primes or not
*/
#include<stdio.h>
int gcd(int a, int b){//function to find gcd
	int Gcd;
	for(int i=1; i<=a&&i<=b; i++){
		if(a%i==0 && b%i==0) Gcd=i;
	}
	return Gcd;
}
void coprime(int a, int b){//check whethr coprime or not
	if (gcd(a,b)==1) {
		printf("%d and %d are Co-Prime\n", a,b);
	}
}
int main(){
	int A[5];
	int max=1;
	printf("Enter numbers : ");
	for(int n=0;n<5;n++) scanf("%d", &A[n]);
	for(int i=0;i<5;i++){
		for(int j=0;j<i;j++){
			if (i==j) continue;
			coprime(A[i],A[j]);
		}
	}
	for(int i=0;i<5;i++){//condition for no co prime pairs
		for(int j=0;j<i;j++){
			if (i==j) continue;
			if(gcd(A[i],A[j])>max) max=gcd(A[i],A[j]);
			if (max==1) break;
		}
	}
	if(max>1) printf("No Co-prime found");
	return 0;
}