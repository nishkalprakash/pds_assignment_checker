#include <stdio.h>
int main(){
	//program to sum of n , n^2 and its digit.
	// name priyanshu ranjan 
	// roll no 24NA10052
	// initialising of values and assigning.
	int s1=0,s2=0,s3=0,n=0;
	// input of values
	printf("Enter the integer: ");
	scanf("%d", &n);
	//sumation of integers

	s1 = (n*(n+1))/2;
	//sumation of square of integer
	s2 = (n*(n+1)*((2*n)+1))/6;
	//sum of digit
	s3 += n/100;
	n = n%100;
	s3 += n/10;
	n= n%10;
	s3+= n;
	// print the values are.
	printf("the sumation of n terms is : %d \n", s1);
	printf("the summation of sqaure of n is : %d\n",s2);
	printf("sum of the digit of n is:%d\n",s3);
}

