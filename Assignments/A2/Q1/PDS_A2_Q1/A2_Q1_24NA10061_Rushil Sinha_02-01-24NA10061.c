// Program to find the sum of series
// Name: Rushil Sinha
// Roll number: 24NA10061

#include <stdio.h>

int main(){
	int n, S1, S2, S3, oneD, tenD, hunD;
	printf("Enter an integer:");
	scanf("%d", &n);
	S1 = n*(n + 1)/2;
	S2 = n*(n + 1)*(2*n + 1)/6;
	oneD = n % 10;
	hunD = n/100;
	tenD = (n/10) - (hunD*10);
	S3 = oneD + tenD + hunD;
	printf("S1 = %d /n", S1);
	printf("S2 = %d /n", S2);
	printf("S3 = %d /n", S3);
	return 0;
}
