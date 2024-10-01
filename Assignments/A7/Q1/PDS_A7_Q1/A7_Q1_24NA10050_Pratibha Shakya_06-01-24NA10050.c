//Program to find sum of series using functions
//Program Creator: Pratibha Shakya
//Roll no. : 24NA10050

#include<stdio.h>

int power(int x, int n){		//Defining the function power
	int prod;			
	for(prod=1;n>0;n--)		//Using loop to multiply by x, n number of times
		prod*=x;
	return prod;			//returning the result
}
	
int fact(int n){			//defining the function fact
	for(n;n>1;n--)			//Using loop to multiply with one integer less to find factorial
		n*=(n-1);
	if(n==0 || n==1) 		//since the loop will not work for 0 and 1, Value of 0! and 1! is 1 only
		n=1;
	return n;			//returning the result
}

int main(){
	
	int x, n, i;
	float sum;
	scanf("%d%d", &x, &n);		//taking input from user
	for(sum=0, i=0; i<n; i++){	//using loop to sum n no. of terms
		sum= sum+ ((float)power(x,i))/fact(i);		//calling the defined functions
	}
	printf("%f", sum);		//printing the final summation
	
	return 0;
}
		
	
