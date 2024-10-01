// Program to find sum of the first n terms of the following series:
// Author Name: Prateek Kesavarapu
// Roll Number: 24NA10049

#include <stdio.h>

// Defining the function to find x to the power of n
int power(int x, int n){
	int temp = x;
	if(n == 0) // Handling the case of x to the power of zero
		return 1;
	for(int i = 1; i < n; i++)
		x *= temp;
	return x;
}

// function to find factorial of n
int factorial(int n){
	int fact = 1;
	if(n == 0 || n == 1) // Factorial of n = 0 and n = 1
		return 1;
	for(int i = 2; i <= n; i++)
		fact *= i;
	return fact;
}

int main(){
	int x, n;
	printf("Enter a (x, n): ");
	scanf("%d %d", &x, &n);
	float sum = 0;
	for(int i = 0; i < n; i++){
		sum += (float)(power(x, i))/(factorial(i));
	}
	printf("Sum is: %2.4f\n", sum);
	return 0;
}
