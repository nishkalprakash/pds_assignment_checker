#include<stdio.h>


//Defining power function to calculate power of x
float power(int x, int n){
	if(n == 0) return 1 ;
	int a = 1;
	for(int i=0 ; i<n ; i++){
		a *= x ;
	}
	return a ;			//Returning the value of x^n
}

//Defining factorial calculate factorial of n
float fact(int n){
	int a = 1 ;
	if(n==0 || n==1) return 1 ;
	for(int i=1; i<n+1 ; i++){
		a *= i ;
	}
	return a ;			//Return n!
}

int main(){
 	int x,i,n;
 	float sum=0.0 ;			//Variables with suitable data types
 	printf("Enter x and n : ");
 	scanf("%d%d", &x,&n);		//User input of x and n
 	
 	//for loop to find the required sum
 	for(i=0 ; i<n; i++){
 		sum += power(x,i)/fact(i);
 	}
 	
 	printf("The sum is : %f \n", sum);		//Printing the final sum
 	return 0;
 }
