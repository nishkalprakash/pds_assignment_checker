/*
program to print pairs of coprimes

Name: S.Akshay
Roll No: 24NA10062
*/

#include <stdio.h>

int gcd(int a, int b){
	if(b>a){
		int tmp=a;
		a=b;
		b=tmp;
	}
	//use Euclids method
	//gcd (a,b)= gcd(b,a%b)
	//gcd = a, if b=0
	while(b!=0){
		int tmp = a;
		a = b;
		b = tmp%b;
	}
	return a;
}
		

void main(){
	int arr[5];
	int cnt=0;//to check if atleast one pair is coprime
	printf("Enter 5 integers: ");
	for(int i=0;i<5;i++) scanf("%d",&arr[i]);
	for(int i=0;i<4;i++)
		for(int j=i+1;j<5;j++)
			if(gcd(arr[i],arr[j])==1){
				printf("%d and %d are Co-Prime\n",arr[i],arr[j]);
				cnt++;
			}
	if(cnt==0)printf("No Co-Prime found\n");
}
