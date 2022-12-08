/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 5
Description : Finding the co-prime pairs among the given numbers as input
*/

#include<stdio.h>

int flag=0;
int gcd(int a,int b){
	int temp,y;
	if(a>b){
		temp=a;
		a=b;
		b=temp;
	}
	while(b%a != 0){
		y=b%a;
		b=a;
		a=y;
	}
	return(a);
}
void CoPrime(int a,int b){
	if (gcd(a,b)==1){
	printf("%d and %d are Co-Prime\n",a,b);
	flag++;
	}
}
void pair(int a,int b,int c,int d,int e){
	CoPrime(a,b);
	CoPrime(a,c);
	CoPrime(a,d);
	CoPrime(a,e);
	CoPrime(b,c);
	CoPrime(b,d);
	CoPrime(b,e);
	CoPrime(c,d);
	CoPrime(c,e);
	CoPrime(d,e);
}
int main(){
	int A[5];
	printf("Enter any 5 numbers : ");
	scanf("%d %d %d %d %d",&A[0],&A[1],&A[2],&A[3],&A[4]);
	pair(A[0],A[1],A[2],A[3],A[4]);
	if(flag==0)
		printf("No Co-Prime found\n");
return 0;
}
