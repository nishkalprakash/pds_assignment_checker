// Program to calculate Sum of natural numbers, squares of natural numbers and sum of digits without loops
// Creator: Prateek Kesavarapu
// Roll No: 24NA10049

#include <stdio.h>

int main(){
	int n, S1, S3;
	long S2;
	printf("Enter a number: ");
	scanf("%d", &n);
	S1 = n * (n + 1)/2; // Sum of natural numbers till n
	S2 = n * (n + 1) * (2*n + 1)/6; // Sum of squares of natural numbers till n
	S3 = n/100 + (n % 100)/10 + n % 10; // Since the number is specified to be a 3 digit number we can use this logic
	printf("S1: %d \nS2: %ld \nS3: %d \n", S1, S2, S3); // All sums printed out
	return 0;
}
