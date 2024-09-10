//C program working with three 1-D arrays
//Code creator: Pratibha Shakya
//Roll no.: 24NA10050

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#define N 5
#define A 5
#define B 5

int main(){
	float Filter[N];
	int Bin_A[A], Bin_B[B];
	int x,y,k,i,j;
	
	//Filling the array Filter 
	srand(42); 		//Fixed seed (42) 
	for(i=0;i<N;i++){
	
	//Random number generator with a fixed seed (42) to check the test cases
	int randomNumber = rand()%100 +1;
	printf("Random Number: %d\n", randomNumber);
	x=randomNumber;			//Assigning the random generated number to x
		
		//Computing y using the given generator 
		for(k=1;k<=x;k++)						//Looping for summation
			y= (((pow(-1,(k+1)))*k*k)/(2*k+1))+cos(x/2);		//using pow and cos function from math library
		Filter[i]=y;
	}
	
	//Printing the array Filter
	printf("Filter= ");
	for(i=0;i<N;i++)
		printf("%f ", Filter[i]);
		printf("\n");
		
	//finding minimum and maximum values of the array Filter
	int min=Filter[0], max=Filter[0];
	for(i=1;i<N;i++){
		if(Filter[i]<min)
			min=Filter[i];
		if(Filter[i]>max)
			max=Filter[i];
	}
		
	//Filling the array Bin_A and Bin_B
	srand(42);			//Fixed seed(42)
	for(i=0;i<A && i<B;i++){
	
	//Random number generator with a fixed seed (42) to check the test cases
	int randomNumber = rand()%100 +1;
	printf("Random Number: %d\n", randomNumber);
	x=randomNumber;			//Assigning the random generated number to x
		
		//Computing y using the given generator 
		for(k=1;k<=x;k++)						//Looping for summation
			y= (((pow(-1,(k+1)))*k*k)/(2*k+1))+cos(x/2);		//using pow and cos function from math library
		for(j=0;j<N;j++){
			if(y>Filter[j])
				Bin_A[i]=y;
			if(y<Filter[j])
				Bin_B[i]=y;
		}
	}
	
	//Printing the array Bin_A
	printf("Bin_A=");
	for(i=0;i<N;i++)
		printf("%d ", Bin_A[i]);
		printf("\n");
		
	//Printing the array Bin_B
	printf("Bin_B=");
	for(i=0;i<N;i++)
		printf("%d ", Bin_B[i]);
		printf("\n");
		
	return 0;
}
	
