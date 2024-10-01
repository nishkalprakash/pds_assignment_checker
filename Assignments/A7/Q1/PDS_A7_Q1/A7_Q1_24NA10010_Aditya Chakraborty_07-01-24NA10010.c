//to write a program to find the solution of the given formula by using functions
//Code Creator : Aditya Chakraborty
//Roll No : 24NA10010
#include <stdio.h>
int power(int x,int n){      //making a function for pow(x,n)
	int prod=1;
	int i=0 ;
	while (i<n) {
		prod = prod*x;
		i++;
		}
	return prod;
}
int fact(int n) {            //making a function for factorial of a number
	int i=1 ;
	int t=1;
	while (i<=n) {
		t=t*i;
		i++;
		}
	return t;
}
int main (){
	float sum=1;
	int x,n;
	printf ("Enter x :");
	scanf ("%d",&x);
	printf ("Enter n :");
	scanf ("%d",&n);
	for (int i=1;i<n;i++){         //using for loop to calculate the sum of the consecutive terms 
		int r = power (x,i);
		int s = fact (i);
		
		sum = sum + (float)r/s;
		}
	printf ("the output is :%f",sum);
	return 0;
}
	
