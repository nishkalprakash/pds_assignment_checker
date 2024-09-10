#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>

#define N 40
#define A 15
#define B 15

int main() {
	float filter[N] , y , sig = 0.0 ;
	int i, k,a=0 ,b=0 ,Bin_A[A] , Bin_B[B], x;
	srand(42) ;
	// Creating filter array
	for(i=0 ; i<N ; i++){
		//Generating  random number x 
		x = rand()%100 + 1 ; 
		
		//Calculating sigma 
		for (k=1 ; k<=x ; k++){
			sig += pow(-1,k+1)*k*k/(2*k + 1) ;		//Expression for sigma
		}
		y = sig + cos(x/2) ;			//Expression for y
		filter[i] = y ;     //Appending y in Filter
		sig = 0 ;
	}
	
	//Creating Bin_A and Bin_B
	for(i=0 ; i<N ; i++){
		if(a <15 && b<15){			//Condition to check if any of array is full
			x = rand()%100 + 1;
			for (k=1 ; k<=x ; k++){
				sig += pow(-1,k+1)*k*k/(2*k + 1) ;		//Expression for sigma
			}
			y = sig + cos(x/2);		//Expression for y
			
			//Condition for appending x in Bin_A or Bin_B
			if(y>filter[i]) {
				Bin_A[a] = x ;
				a++ ;
				//continue ;
			}
			if(y<filter[i]) {
				Bin_B[b] = x ;
				b++ ;
				//continue ;
			}
		}
	}
	
	//Printing all arrays
	
	printf("\nFilter \n");
	for (i=0 ; i<N ;i++) printf("%f \t", filter[i]);		//Filter array
	
	printf("\n");
	printf("\nBin_A \n");
	
	for (i=0 ; i<a ;i++) printf("%d \t", Bin_A[i]);		//Bin_A array
	
	printf("\n");
	printf("\nBin_B \n");
	
	for (i=0 ; i<b ;i++) printf("%d \t", Bin_B[i]);		//Bin_B array
	
	return 0 ;
}	
