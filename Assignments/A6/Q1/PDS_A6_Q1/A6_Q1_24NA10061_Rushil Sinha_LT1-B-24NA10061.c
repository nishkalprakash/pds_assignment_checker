//NAME: RUSHIL SINHA
//ROLL NO.: 24NA10061
//Lab Test 1
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
	#define N 5	//Defined A,B,N as constants
	#define A 5
	#define B 5
int main() {
	
	float Filter[N];								
	int Bin_A[A];
	int Bin_B[B];
	float y=0;
	int Xnew = 0;									//Xnew is x randomly generated after creation of filter
	srand(42);
	
	for(int i=0; i < N; i++){
		int x = rand() %100 + 1;
		for (int k=1; k<=x; k++) {						//Evaluating value of sigma by looping through k
			y += (k*k)/(2*k + 1) - (pow(-1,k)*k) + sin(x/3);		//y = f(x); as given in question
		}
		Filter[i] = y;								//Filling Filter array with values of y obtained
	}

		for (int i=0; i < N; i++){						
			Xnew =(rand() %100)+ 1;						//Creating new random number to check for BinA and BinB
			for (int k=1; k<=Xnew; k++) {						
				y += (k*k)/(2*k + 1) - (pow(-1,k)*k) + sin(Xnew/3);	//y = f(x) as given
			}
			for (int reader=0; reader < N; reader++) {			//Checks whether value of y is > or < value in Filter
				if (y < Filter[reader]) {
					Bin_A[i] = Xnew;
				}
				if (y > Filter[reader]) {
					Bin_B[i] = Xnew;
				}
			}
		}
	
	
	printf("Values in filter:\n");
	for (int readN = 0; readN < N; readN++) { 	//printing Filter Array
		printf("%f ", Filter[readN]);
	}
	printf("\n");
	printf("\nValues in Bin_A:\n");			//printing Bin_A
	for (int readA = 0; readA < A;readA++){
		printf("%d ", Bin_A[readA]);
	}
	printf("\n");
	printf("\nValues in Bin_B:\n");			//printing Bin_B
	for (int readB = 0; readB < B;readB++) {
		printf("%d ", Bin_B[readB]);
	}
	printf("\n");
return 0;
}
