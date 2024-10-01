//Program to 
//Code Creator: Arjun Agarwal
//Roll No: 24NA10018
#include <stdio.h>
int power(int x, int n);	//Introduce the function we need
int fact(int n);
int main(){

int n, x ;
float sum = 0;			
	printf("Enter the value of x :") ;
	scanf("%d",&x);
	printf("\nEnter the value of n :") ; 
	scanf("%d",&n);
for(int i=0; i < n; i++){
sum = sum + (float)power(x,i)/fact(i) ;
 }
	printf("%.4f\n",sum);
	return 0;
}

int power(int x, int n){		//Defining the power function
int prod=1 ;				//Here prod is x to the power n
	
for(int i=0; i < n; i++)
	prod = prod * x ;
	
return prod ;				//This function will return prod
}

int fact(int n){			//Defining the factorial function
int prod=1;				//Here prod is n factorial
for(int i=1; i <= n; i++){
	prod = prod * i;
	
 }
return prod;				
}
		

