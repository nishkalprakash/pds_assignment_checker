#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
int main()
{	
	
	// FILLING OF FILTER
	srand(42);
	
	const int N=10,A=5,B=5;
	float Filter[N];
	int Bin_A[A], Bin_B[B],y,k,x,i=0;
	
	//1 FILLING OF FILTER
	
	while(i<N){
		x=rand()%100 + 1;
	
		for (k>1;k<x;){
			y=(k*k/2*k +1) - pow(-1,k) *(k) + sin(x/3);
			k++;}
		y=Filter[i];
		i++;
		}
	// Filling of Bin_A
	while (i<A){
		x=rand()%100 + 1;
		for (k>1;k<x;){
			y=(k*k/2*k +1) - pow(-1,k) *(k) + sin(x/3);
			k++;
				}
		if (y<Filter[i]) {Bin_A[i]=y;
		i++;}
		}
	//Filling of Bin_B 
	while (i<B){
		x=rand()%100 + 1;
		for (k>1;k<x;){
			y=(k*k/2*k +1) - pow(-1,k) *(k) + sin(x/3);
			k++;
				}
		if (y>Filter[i]) {Bin_B[i]=y;
		i++;}
		}
	// DISPLAY OF THE VALUES
	printf("FILTER\n");
		while(i<N){
		printf("%f",Filter[i]);
		i++;
		}
	printf("\nBin_A\n");
		while(i<A){
		printf("%d",Bin_A[i]);
		i++;
		}
	printf("\nBin_B\n");
		while(i<B){
		printf("%d",Bin_B[i]);
		i++;
		}	
	return 0;
	}


