// Code creator: Nishkal Prakash (nishkal@iitkgp.ac.in)
// Program to print factors of a number

#include <stdio.h>

int main()
{
	int N;                              // N is the input number
	printf("Enter N: ");
	scanf("%d", &N);
	printf("The factors of %d: ",N);
	if(!N){
        
        return 0
    } 
    N=(N<0)?-N:N;                        // This is a ternary operator (it operates on 3 operands) (basically a one liner if else statment)
	for(int i=2; i<=N/2; i++){
        (N%i)?:printf(" %d",i);
    }
	return 0;
}