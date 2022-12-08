/*
Section14
Roll No: 22MA10059
Name: Srijan Ranjan
Assignment no:5
Description: This program takes a pair of numbers and  decides if they are coprime.
*/
#include<stdio.h>
int count=0;
int gcd(int a,int b){									// This function calculates the GCD.
	if(a==b){
		return a;
	}
	if(a>b){
		return gcd(a-b,b);
	}
	else if(b>a){
		return gcd(a,b-a);
	}
}
void coPrime(int a,int b){									//This function decides if the numbers are coprime
	int flag;
	flag=gcd(a,b);
	printf("HERE\n");
	if(flag==1){
		printf("%i & %i is a pair of co prime numbers",a,b);
		count++;
	}
}
void pair(int a[]){											//This function takes all the value to coprime function.
	int i,j;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			printf("%d %d\n",i,j);
			coPrime(a[i],a[j]);
			printf("%d %d\n",i,j);

		}
	}
}
int main(){													//This is the main function that takes input.
	int ar[5];
	for(int i=0;i<5;i++){
		scanf("%d",&ar[i]);
	}
	pair(ar);
	if(count==0){
		printf("No Coprimes found");
	}
	return 0;
}