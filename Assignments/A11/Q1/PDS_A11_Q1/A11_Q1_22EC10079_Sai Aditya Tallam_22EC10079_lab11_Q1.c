#include<stdio.h>

float sum(int);    //sum function to add the harmonic series
int main()
{ 
    int N;
    float t;
	printf("enter the value of N : ");
	scanf("%d",&N);
	t=sum(N);
	printf("%0.3f",t);    //upto 3 decimal places
	return 0;
}

float sum(int n)
{
    if(n==1) return 1.0;       //base condition
    return(sum(n-1)+1.0/n);      //calling function recursively
   
}