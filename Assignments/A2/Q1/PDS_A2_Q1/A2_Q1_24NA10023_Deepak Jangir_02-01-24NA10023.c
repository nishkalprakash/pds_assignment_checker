// Program
// Deepak Jangir 
// 24NA10023

#include<stdio.h>
#include<math.h>
int main()
{
	int n, a, b, c;
	long S1, S2, S3;
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	S1 = (n * (n + 1))/2;
	S2 = (n * (n + 1) * (2 * n + 1))/6;
	
	S3 = n%10 + (n/10)%10 + (n/100)%10;
	// scanf("%d,%d,%d", &S1, &S2, &S3);
	
	printf("%ld\n", S1);
	printf("%ld\n", S2);
	printf("%ld\n", S3);
	return 0;
}	
