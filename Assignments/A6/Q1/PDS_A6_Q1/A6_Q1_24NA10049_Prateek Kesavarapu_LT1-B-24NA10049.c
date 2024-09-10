// A Program to populate 3 arrays
// Code Author: Prateek Kesavarapu
// Roll No    : 24NA10049

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define A 20
#define B 30
#define N 50

int main(){
	int x;
	float filter[N], y;
	srand((int)(time(0))); // Making the numbers truly randomized
	
	// Assigning the filter array
	for(int i = 0; i < N; i++){
		y = 0, x = rand() % 100 + 1; // The numbers lie between 1-100
		for(int k = 1; k <= x; k++){
			y += (k * k)/(2*k + 1) - pow(-1, k) * k;
		}
		y += sin(x/3);
		filter[i] = y;
	}
	
	// Performing operations to Create the Bins
	int Bin_A[A], Bin_B[B];
	int aCount = 0, bCount = 0;
	for(int i = 0; i < N; i++){
		y = 0, x = rand() % 100 + 1;
		for(int k = 1; k <= x; k++){
			y += (k * k)/(2*k + 1) - pow(-1, k) * k;
		}
		y += sin(x/3);
		if(aCount != A && bCount != B){
			if(filter[i] > y){
				Bin_A[aCount] = x;
				aCount++; 	
			}
			else if(filter[i] < y){
				Bin_B[bCount] = x;
				bCount++;
			}
		}
		else{
			break;
		}
	}
	
	// Printing out the arrays
	printf("Filter: {");
	for(int i = 0; i < N - 1; i++){
		printf("%f, ", filter[i]);
	} 
	printf("%f}\n\n", filter[N-1]);
	
	printf("Bin_A: {");
	for(int i = 0; i < aCount - 1; i++){
		printf("%d, ", Bin_A[i]);
	}
	printf("%d}\n\n", Bin_A[aCount - 1]);
	
	printf("Bin_B: {");
	for(int i = 0; i < bCount - 1; i++){
		printf("%d, ", Bin_B[i]);
	}
	printf("%d}\n", Bin_B[bCount - 1]);
	
	return 0;
}
