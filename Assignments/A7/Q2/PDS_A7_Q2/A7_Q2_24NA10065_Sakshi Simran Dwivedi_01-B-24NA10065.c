

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>


int main()
{
//Random number generator with a fixed seed (42) to check the test cases//
srand (42);

int randomNumber = rand () % 100 + 1;
printf("Random Number: %d\n", randomNumber);


const int N=20,A=20,B=20;

int x,i,g,h,k;
double y;


float sum1, Filter[N];

for (i=0; i<N; i++) {
	int randomNumber = rand () % 100 + 1;
	printf("Random Number: %d\n", randomNumber);
	x=randomNumber;
		for (k=1; k<=x; k++) {  //getting the output from the summation function seperately//
		float sum=0; 
		sum1 = ((k*k)/(2*k+1)) - (pow(k,-1) * k); //calculating summation part of the function//
		y = sum1 + sin(x/3); //calculating the x part of the function seperately//
		sum += y; //
	
			for (i=0; i<N; i++) {
				Filter[i]=sum;
			}
	}	
	}
int Bin_A[A], Bin_B[B];

for (i=0; i<N; i++) {
	int randomNumber = rand () % 100 + 1;
	printf("Random Number: %d\n", randomNumber);
	x=randomNumber;
	if (y<Filter[i]) {
		for(g=0; g<A; g++) {
			Bin_A[g]=x;
			}
		}
	if (y>Filter[i]) {
		for(h=0; h<B; h++) {
			Bin_B[h]=x;
			}
		}
	}

for (i=0; i<N; i++) {	
	printf("Values in Filter[%d] = %f \n", i,Filter[i]);
	}
	
for(g=0; g<A; g++) {
	printf ("Values in Bin_A[%d] = %d \n", g, Bin_A[g]);
	}
	
for(h=0; h<B; h++) {
	printf ("Values in Bin_B[%d] = %d \n", h, Bin_B[h]);
	}
	
}

	
	
	

