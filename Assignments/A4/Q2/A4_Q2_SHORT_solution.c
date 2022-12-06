// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print sum of its digits
// This is just an example to show how short a code is possible

#include <stdio.h>
int main(){
	int N, sum;			 			// N is the input number
	scanf("%d", &N);
	do sum += N % 10;				
	while (N /= 10);				// Note the use of N /= 10 which is same as N = N/10, the exp /= returns N/10 to while and stores it in N
	return printf("%d", sum);
}