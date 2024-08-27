// Program to output the given series up to the inputted number n
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>

int main(){
	int n;
	printf("Enter a positive number: ");
	scanf("%d", &n); // Taking input of the number of elements to be outputted
	if(n > 0){
		int t1 = 1, t2 = 1, sign = 1; // Since this is a fibonnacci sequence first 2 elements will be initialized to one
		for(int i = 1; i < n; i++){
			printf("%d, ", sign * t1);
			t2 += t1;
			t1 = t2 - t1;
			sign *= -1; // Alternatively varying between positive and negative
		}
		printf("%d\n", sign * t1);
	}
	else{
		printf("N is invalid\n");
	}
	return 0;
}
