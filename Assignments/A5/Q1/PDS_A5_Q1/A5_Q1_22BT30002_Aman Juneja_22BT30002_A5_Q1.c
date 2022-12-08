/*
* Section 14
* Roll No : 22BT30002
* Name : Aman Juneja
* Assignment No : 5
* Description :to find sum of series using functions fact(n) and power(x,n)
*/

#include<stdio.h>

//initialisation of global variable product and factorial 
int prod=1;
int factorial=1;

//power function return the prod variable after calculation of x^n
int power(int x,int n){
	//prod initialised to 1 every time function is called
	prod=1;

	//for loop to calculate x^n
	for(int i=0;i<n;i++){
		prod*=x;	
	}
	return prod;

}

//factorial function to calculate factorial of n 
int fact(int n){
	
	//reintialisation of factorial variable for every time function fact(n) is called
	factorial=1;

	//loop to calculate factorial
	for(int i=1;i<=n;i++){
		factorial*=i;            
	}

	//return statement	
	return factorial;

}

//main function
int main(){
	float sum=0.0;
	int n,x; //two variable x and n to be taken by user as input for calculation of series
	printf("enter the value of x and n : ");
	scanf("%d %d",&x,&n);

	for(int i=0;i<n;i++){
		sum+=((float)power(x,i)/fact(i));    //typecasting to float as int/int gives int 
	}
	
	printf("the sum of series is : %f",sum);

	return 0;
}
