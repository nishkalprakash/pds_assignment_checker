/*
satya prakash nanda
22ag10041
section 14
lab 11
question 2
*/
#include<stdio.h>
int fib(int n);

int main(){
	int arr[30];
	for(int i=0; i<30; i++){
		arr[i]=fib(i);
	}
	int n;
	printf("enter the number you want to check if it belongs to fibonacci series:");
	scanf("%d", &n);
	int flag=0;
	for(int i=0;i<30; i++){
		if(arr[i]==n){
			flag++;
		}
	}
	if(flag!=0){
		printf("yes\n");
	}
	else{printf("no\n");}
	return 0;
	}
	int fib(int n){
	if(n==0){return 0;}
	if(n==1){return 1;}
	int fibnm1=fib(n-1);
	int fibnm2=fib(n-2);
	int fibn=fibnm1 + fibnm2;
	return fibn;
}
