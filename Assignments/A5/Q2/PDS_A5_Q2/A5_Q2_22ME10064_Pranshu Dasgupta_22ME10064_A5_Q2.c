/*
Section 14
Roll No : 22ME10064
Name : Pranshu Dasgupta
Assignment No : 5
Description : Program to find co prime numbers in a user input array*/

#include <stdio.h>

int CoPrime(int a, int b);
int gcd(int a, int b);
int pair(int a[]);

int main(){
	int ls[5], i, flag=0;
	for (i=0; i<=4; i++){
		scanf("%d", &ls[i]);
	}
	flag=pair(ls);
	if (flag==0) printf("No Co-Prime found");	
}

int gcd(int a, int b){  //Function to find the GCD of two numbers
	int i, x, y, gcd;
	x=a; y=b;
	if (b>a){x=b;y=a;}
	for (i=1; i<=a; i++){
		if (x%i==0 && y%i==0){
			gcd=i;
		}
	}
	return gcd;
}

int CoPrime(int a, int b){  //Function to check if two numbers are co prime or not
	if (gcd(a, b)==1) return 1;
	else return 0;
}

int pair(int a[]){
	int i, j, flag=0;
	for (i=0; i<=4; i++){
		for (j=i+1; j<=4; j++){  //Two loops required to check for all possible pairs
			if (CoPrime(a[i], a[j])){
				printf("%d and %d are Co-Prime\n", a[i], a[j]);
				flag=1;
			}		
		}
	}
	return flag; //Flag variable ensures that if no co prime exists, program finally prints no co prime found and doesn't repeatedly print no co prime at every iteration.
}
