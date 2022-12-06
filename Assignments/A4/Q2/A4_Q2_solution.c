// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print sum of its digits

#include <stdio.h>
int main(){
	int N,sum=0,d;         						 // N is the input number
	printf("Enter N: ");
	scanf("%d", &N);
	while(N!=0){               			// We just loop uptil N = 0
		d=N%10;							// Extracting last digit
        sum=sum+d;       			    // adding digit to sum
		N=N/10;							// dividing the number by 10
    }
	printf("The sum of the digits is: %d",sum);
	return 0;
}