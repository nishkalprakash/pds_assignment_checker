// Program to compute the sum of seres
// Code creator : Nishita Gupta
// Roll number : 24NA10042

#include <stdio.h>
int main()
{
 	int n,s1,s3;
 	long int s2;
 	// assume 100<=n<=999, n is a three digit number //
	
 	printf("enter an integer n");
 	
 	scanf("%d", &n);
 
 	s1= (n*(n+1))/2;
 	
 	
 	s2= (n*(n+1)*(2*n+1))/6;
 	
 	
 	printf("%d \n", s1); 
 	
 	
 	printf("\n %ld \n", s2);
 	
 	return 0;
 }	
 
