#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define A 25
#define B 25
#define N 25

double f(int x){					//f(x)
	double y=0;
	for (int k=1;k<=x;k++){
		y+= (pow(-1,k+1)*k*k)/(2*k+1);
		}					//loop to simulate summation
	y+=cos(x/2);					//GENERATOR
	return y;
}

void print_arr_double(double arr[],int n); 			//func prototype for printing array
void print_arr_int(int arr[],int n);				//requires different functions for int and double arrays


int main(){
	
	int x,count_A=0,count_B=0,tempA,tempB;			//count_A counting entries in BIN_A and similarly for count_B
	double FILTER[N];
	int BIN_A[A],BIN_B[B];			//tempA and tempB variables for checking is a value is added to respective array
	srand(42); 
	
	
	for (int i=0;i<N;i++){
		x= rand()% 100+1;
		FILTER[i]= f(x);			//filling FILTER
	}
	
	while (1){
		x= rand()% 100+1;
		int y=(int)f(x);
		for (int i=0;i<N;i++){		//filling BIN_A
			if (y>FILTER[i]){					//inside while loop both BINA AND BINB require differet loops
				tempA=count_A;					//else they conflict by taking each others non-fully-checked values
				BIN_A[count_A]=y;
				count_A++;
				if (tempA<count_A) break;			//If true, ie value added to array hence break
			}
		}
		for (int i=0;i<N;i++){		//FILLING BIN_B
			
			if (y<FILTER[i]){
				tempB=count_B;
				BIN_B[count_B]=y;
				count_B++;
				if (tempB<count_B) break;			//If true, ie value added to array hence break		
			}
		}
			
		if ((count_A==A)||(count_B==B)){	//while loop breaks once either BIN_A or BIN_B are full
			break;
		}
		}
	
	printf("Printing \"Filter\"\n");print_arr_double(FILTER, N);				//DISPLAYING ARRAYS
	printf("Printing \"BIN_A\"\n");print_arr_int(BIN_A, count_A);
	printf("Printing \"BIN_B\"\n");print_arr_int(BIN_B, count_B);
	
		
	}
	
void print_arr_double(double arr[],int n){			//defining func
	for (int i=0;i<n;i++){
		printf("  %lf",arr[i]);
	}
	printf("\n\n\n");
}

void print_arr_int(int arr[],int n){			//defining func
	for (int i=0;i<n;i++){
		printf("  %d",arr[i]);
	}
	printf("\n\n\n");
}
		
