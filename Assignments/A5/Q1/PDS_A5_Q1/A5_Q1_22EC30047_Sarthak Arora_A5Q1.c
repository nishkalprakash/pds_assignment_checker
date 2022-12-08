/* 
section 14
roll.no. = 22EC30047
name = SARTHAK ARORA
Assignment .no  : 5
description: the find sum of the series 
*/ 




# include <stdio.h>
# include <stdlib.h>

float fact(int n);
float power(int x, int n);                                                                       //initializing functions

int main()
{
	int x ,n  ; 

	printf("enter the value of x: ");
	scanf("%d",&x);
	printf("enter the number of terms you want in the series: ");                             // taking input n and x from user
	scanf("%d",&n);

	float i=0 , sum = 0;
	
	while (i<n)
		{sum = sum + (power(x,i))/(fact(i)) ;                                              // using a loop to find sum of the series
		i++;}
	
	printf("sum of first %d ters of te given series is : %f", n,sum);
		
	

	return 0;
}


float fact(int n)                                                                                    // defining factorial
{
	float z,a=1;
	for(z=1;z<=n;z++){
	a=a*z;
	}
	return a;
}

float power(int x, int n)                                                                              // defining power of x to n 
{
	int i=0, mul=1;
	while(i<n){
	mul *= x;
	i++ ;
	}
	return mul ;
}
	

		
