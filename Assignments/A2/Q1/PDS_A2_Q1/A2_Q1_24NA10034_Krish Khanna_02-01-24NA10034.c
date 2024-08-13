//24NA10034
//Program to calculate sum, sum of squares and sum of digits
#include <stdio.h>
int main()
{
	int n, S1, S3, a ,b ,c;
	long S2;
	printf("\nPlease input the integer till which you would like the sum to be calculated to: ");
	scanf("%d", &n);
	printf("\nThe number you entered is:%d ",n);
	S1 = n*(n+1)/2;  //sum of natural numbers
	printf("\nThe sum of all the natural numbers till %d is %d ", n, S1);
	S2 = n*(n+1)*(2*n+1)/6;  //sum of squares of natural number
	printf("\nThe sum of squares of all the natural numbers till %d is %ld \n", n, S2);
	a= n%10; //ones place
	b= (n-a)%100;  //tenths place
	c= (n-a-b)/100; //hundreths place
	S3= a + (b/10) + c; //sum of digits
	printf("The sum of the digits of the number you entered is %d\n", S3);
	return 0;
}
