#include<stdio.h>

int fib(int n){
	if(n==0){
		return 0;
	}
	else if(n==1){
		return 1;
	}
	else{
		return fib(n-1)+fib(n-2);//A recursive function to get the fibonacci series 
	}
}
int main(){
	int n;
	printf("Enter a number n");
	scanf("%d", &n);
	//printf("%d", fib(n));was checking whether the fibinacci function was working 
	int flag=0;
	for(int j=0; j<(n+5); j++){//iterating a loop to check whether the number matches with any fibonacci number 
		if(n==fib(j)){
			flag=1;
		}
	}
	if(flag==1){
		printf("yes");
	}
	else{
		printf("no");
	}
}