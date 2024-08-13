// Program to compute the sum of the series
// code creator : Aditya Chakraborty
// Roll No: 24NA10010
#include <stdio.h>
int main() {
	int n,S1,S2,S3;
	printf ("Please enter an integer");
	scanf ("%d",&n);
	S1 = (n*(n+1))/2;
	S2 = ((n*2+1)*(n+1)*n)/6;
	S3 = n/100 + n%10 + (n%100)/10;
	printf (" the sum of consecutive numbers:%d \n",S1);
	printf (" the sum of squares of consecutive numbers:%d \n",S2);
	printf (" the sum of consecutive digits of the number:%d \n",S3);
	return 0;
}
// this program executes the following three functions , for any three digit number
