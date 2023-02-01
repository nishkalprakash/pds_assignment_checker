/* 
section 14
roll.no. = 22EC30047
Name = SARTHAK ARORA
Assignment .no  : 11
description: sum of given series
*/ 




# include <stdio.h>
# include <stdlib.h>



// a recursive function 
float sumofseries(int n){
	if(n==1) 
		return 1 ;
	else 
		return ( sumofseries(n-1) + (1.0/n) ); 
}



int main(){

	int n ;
	printf("enter the number of terms till which the sum has to be printed\n");
	scanf("%d",&n);
	printf("sum of first %d terms of the HP is %f\n", n, sumofseries(n));
	

	return 0;
}