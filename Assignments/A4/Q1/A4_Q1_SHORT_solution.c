// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print factors of a number
// This is just an example to show how short a code is possible

#include <stdio.h>
int main(){
	int N;
	scanf("%d", &N);
	if (!N) return printf("0"); 			// Bonus Interview Ques? What value is returned here?
	N = (N < 0) ? -N : N;					// This is a ternary operator (it operates on 3 operands) (basically a one liner if else statment)
	for (int i = 1; i <= N / 2; i++)
		(N % i) ?: printf("%d ", i);		// Notice the use of ternary operator to combine if and printf
	return printf("%d ", N);
}