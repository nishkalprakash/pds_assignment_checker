/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: vs code
Lab Test: 3
*/
#include<stdio.h>
#include<stdlib.h>
void output(int n,int a,int b){
	if(n > 9999 && n < 100000){ //checks 5 digit number when called
		if(n%(a+b) != 0)     //checks if n is divisible by a+b or not
			printf("%d ",n);
		return;
	}
	output(n*10+a,a,b);    //recursive calling of the function again and the number is being ready
    output(n*10+b,a,b);	   //its digit are increasing recursively
}

int main(){
	int a,b;
	printf("Enter two digits:");
	scanf("%d %d",&a,&b);   //enter two numbers
	printf("Numbers:\n");
	output(0,a,b);  //calling of the function
}