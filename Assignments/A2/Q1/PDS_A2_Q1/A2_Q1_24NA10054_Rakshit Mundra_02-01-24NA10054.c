// program to compute sum and sum of sq and sum of digits of 
// a 3 digit number



#include <stdio.h>

int main()
{
	int n, S1, S2, S3;
	printf("input number between 100 to 999\n");
	scanf("%d", &n);
	
	S1= (n*(n+1))/2;  //sum of natural no. till n
	S2= (n*(n+1)*((2*n)+1))/6;  //sum of sq.s till n
	S3= (n%10)+((n%100)-(n%10))+((n%1000)-(n%100)); // sum of digits of n
	
	printf("Sum till n=%d, Sum of Sq till n=%d, Sum of digits of n=%d\n", S1, S2, S3);
	
	return 0;
}
