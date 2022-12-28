/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 6
* Description :to print the terms of series by recursion and recursive calls.
*/

#include<stdio.h>
#include<stdlib.h>	

//recursive function
int term(int n){ 

	//base case
	if(n==0 || n==1 || n==2){
		return n;
	}
	
	//recursive call
	else return 3*term(n-1)*term(n-2) - 2*term(n-2)*term(n-3) +1;
}

//print_term function
int print_term(int n){
	int x;
	//for loop calling term function n times
	for(int i=0;i<	n;i++){
		printf("%d ",term(i));
	}
}

// main function
int main(){
	int k;				//integer variable declared
	printf("k=");		
	scanf("%d",&k);		//scanning k from user

	//checking if k is valid input or not
	if(k>0){
		print_term(k);
	}
	else{
		printf("Invalid Input");
	}
	printf("\n");

	return 0;
}
