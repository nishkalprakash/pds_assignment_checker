/*
Section 14
Roll no. : 22AE10014
Name : Ishan Kanodia
Assignment No. : 2
Description : To print the co primes from the given 
*/

#include<stdio.h>
#include<math.h>

	int gcd(int  m,int n){
		int temp1,temp2;
	if(n>m){
		temp1=n;
		n=m;
		m=temp1;
	}
	while(m%n!=0){
	temp2=n;
	n=m%n;
	m=temp2;
//	gcd(m,n);
	}
	return(n);
	}

	void CoPrime(int a,int b){
	if(gcd(a,b)==1){
		if(a<b)
		printf ("(%d,%d) ",a,b);
		if(a>b)
		printf ("(%d,%d) ",b,a);
	}
}
	void pair(int n,float arr[n]){
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				CoPrime(arr[i],arr[j]);
			}
		}
	}

int main(){
	int n;
	printf("Enter the number of integers you want to enter : ");
	scanf("%d",&n);
	float arr[n];
	for(int i=0;i<n;i++){
		scanf("%f",&arr[i]);
		if(arr[i]<=0){
			printf("Invalid entries: All should be positive numbers");
			break;
		}
		if(floor(arr[i])-arr[i]!=0){
			printf("Invalid entries: All should be integer numbers");
			break;
		}
	}
	pair(n,arr);
return 0;
}
