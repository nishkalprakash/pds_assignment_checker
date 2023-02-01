/*
Name:AMAN JUNEJA
ROLL NO : 22BT30002
SECTION :14
ASSIGNMENT : 11
QUESTION : to find if given number is present in fibonacci sequence or not

*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//fibonacci function
int fib(int n){

	//base case
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}

	//reccurence relation
	return fib(n-1)+fib(n-2);
}

int main(){
	//flag variable 
	int flag=0;
	int n,x;
	
	//scanning number from user
	scanf("%d",&n);

	//for base cases return flag as 1 
	if(n==0){
		flag=1;
	}
	if(n==1){
		flag=1;
	}

	//infinite loop to check if number is in series or not
	for(int i=0; ;i++){
		x=fib(i);
		if(x==n){
			//if number in series
			flag=1;
			// break;
		}

		//if x>n break out
		if(x>n){

			break;
		}
	}

	if(flag) printf("Yes.\n");
	else printf("No.\n");
	return 0;
}